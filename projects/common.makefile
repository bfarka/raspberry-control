I=build
SRCS=$(wildcard src/*.cpp)
OBJS=$(SRCS:src/%.cpp=$(I)/%.o) 

makedirs:
	mkdir -p $(I)

$(I)/%.o: src/%.cpp | makedirs
	g++ -MMD -c -o $@ $<
	
.PHONY: default makedirs

-include $(I)/*.d

