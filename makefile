#makefile

#Makefile
CXX = g++


iterativerecursive: main.o recursive.o
	${CXX} main.o recursive.o -o iterativerecursive

main.o: main.cpp
	${CXX} -c main.cpp

recursive.o: recursive.cpp recursive.hpp
	${CXX} -c recursive.cpp

clean:
	rm *.o iterativerecursive
