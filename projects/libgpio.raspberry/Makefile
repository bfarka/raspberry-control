include ../common.makefile
INC += -I../libgpio/src -I../libutil/src
STATIC_LIB = libgpio.raspberry.a

all: $(STATIC_LIB) ${EXEC_TEST}

${STATIC_LIB}: $(OBJS)
	ar rcs $@ $?

