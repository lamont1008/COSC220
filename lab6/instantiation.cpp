//Kyle Jenifer
//10/29/2020

// instantiation.cpp
// file to link the templated .cpp files (doesn't work without it)
//-------------------------------------------------------------------

#include "Students.cpp"
#include "Lab6.cpp"
#include "Queue.cpp"

template class Queue<int>;
template class QueNode<int>;

template class Queue<Students*>;
template class QueNode<Students*>;
