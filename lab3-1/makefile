output: LinkFun.o LinkedList.o
	g++ LinkFun.o LinkedList.o -o output

LinkedList.o: LinkedList.cpp
	g++ -c LinkedList.cpp

LinkFun.o: LinkFun.cpp Link.h
	g++ -c LinkFun.cpp

clean: 
	rm *.o output

