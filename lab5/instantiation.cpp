// instantiation.cpp
// file to link the templated .cpp files (doesn't work without it)
//-------------------------------------------------------------------
#include "Students.cpp"
#include "Lab5.cpp"
#include "Stack.cpp"

template class Stack<Students*>;
template class StackNode<Students*>;

template class Stack<int>;
template class StackNode<int>;
