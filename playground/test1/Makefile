CXX = clang++

SOURCE_CXX = main.cpp
OBJECT_CXX = main.o

LDFLAGS_COMMON = -std=c++2a -Wall
TARGET = a.out

all:
	${CXX} -c ${SOURCE_CXX} -o ${OBJECT_CXX}
	${CXX} ${OBJECT_CXX} ${LDFLAGS_COMMON} -o ${TARGET}
clean:
	rm -rf ${OBJECT_CXX} ${TARGET}