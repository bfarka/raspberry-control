I=build
I_TEST=buildTest
SRCS=$(wildcard src/*.cpp)
SRCS_TEST=${wildcard srcTest/*.cpp}
OBJS=$(SRCS:src/%.cpp=$(I)/%.o) 
OBJS_TEST=$(SRCS_TEST:srcTest/%.cpp=$(I_TEST)/%.o)
GTEST_LIB=../../externals/googletest/make/gtest.a
GTEST_INC=../../externals/googletest/include/
INC =
TEST_INC=-I${GTEST_INC} ${INC} -Isrc/
TEST_EXECUTABLE = testExecutable
EXEC_TEST = executeTest
DEFAULT_TARGETS = ${EXEC_TEST}

makedirs:
	mkdir -p $(I)
	mkdir -p $(I_TEST)

$(I)/%.o: src/%.cpp | makedirs
	g++ -MMD ${INC} -c -o $@ $< -std=c++11

$(I_TEST)/%.o: srcTest/%.cpp | makedirs
	g++ -MMD  ${TEST_INC} -c -o $@ $< -std=c++11


${GTEST_LIB}:
	make -C ../../externals/googletest/make gtest.a

${TEST_EXECUTABLE}: ${OBJS} ${OBJS_TEST} ${GTEST_LIB}
	g++ -o $@ $^ -pthread

${EXEC_TEST}: ${TEST_EXECUTABLE}
	./${TEST_EXECUTABLE} --gtest_output=xml:gtestresults.xml
	
all: ${DEFAULT_TARGETS}
	
	
.PHONY: default makedirs gtest all ${EXEC_TEST}


.DEFAULT_GOAL:= all

-include $(I)/*.d
-include $(I_TEST)/*.d
