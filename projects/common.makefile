I=build
I_TEST=buildTest
SRCS=$(wildcard src/*.cpp)
SRCS_TEST=${wildcard srcTest/*.cpp}
OBJS=$(SRCS:src/%.cpp=$(I)/%.o) 
OBJS_TEST=$(SRCS_TEST:srcTest/%.cpp=$(I_TEST)/%.o)
GTEST_LIB=../../externals/googletest/make/gtest.a
GTEST_INC=../../externals/googletest/include/
TEST_INC=-I${GTEST_INC} -Isrc/

makedirs:
	mkdir -p $(I)
	mkdir -p $(I_TEST)

$(I)/%.o: src/%.cpp | makedirs
	g++ -MMD -c -o $@ $<

$(I_TEST)/%.o: srcTest/%.cpp | makedirs
	g++ -MMD  ${TEST_INC} -c -o $@ $<


${GTEST_LIB}:
	make -C ../../externals/googletest/make gtest.a

testExecutable: ${OBJS} ${OBJS_TEST} ${GTEST_LIB}
	g++ -o $@ $^ -pthread
	
.PHONY: default makedirs gtest


-include $(I)/*.d
-include $(I_TEST)/*.d
