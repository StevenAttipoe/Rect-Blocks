CXX = g++
CFLAGS = -std=c++17 -Wall -g
LDFLAGS = -lm
ALL: main

rectBlocks.o : rectBlocks.cpp block.h
    ${CXX} ${CFLAGS} -c rectBlocks.cpp

sqrBase.o : sqrBase.cpp block.h
    ${CXX} ${CFLAGS} -c sqrBase.cpp

cubiod.o : cubiod.cpp block.h
    ${CXX} ${CFLAGS} -c cubiod.cpp

cylinder.o : cylinder.cpp block.h
    ${CXX} ${CFLAGS} -c cylinder.cpp

sphere.o : sphere.cpp block.h
    ${CXX} ${CFLAGS} -c sphere.cpp

main.o : main.cpp block.h
    ${CXX} ${CFLAGS} -c main.cpp

main : block.h rectBlocks.o sqrBase.o cubiod.o cylinder.o sphere.o main.o
    ${CXX} ${CFLAGS} rectBlocks.o sqrBase.o cubiod.o cylinder.o sphere.o main.o \
    -o main ${LDFLAGS}

clean :
${RM} -r *.o main
