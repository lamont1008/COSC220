output: TNode.o BST.o Lab7.o
	g++ TNode.o BST.o Lab7.o -o output

TNode.o: TNode.cpp TNode.h
	g++ -c TNode.cpp

BST.o: BST.cpp BST.h
	g++ -c BST.cpp

Lab7.o: Lab7.cpp
	g++ -c Lab7.cpp

clean: 
	rm *.o output

