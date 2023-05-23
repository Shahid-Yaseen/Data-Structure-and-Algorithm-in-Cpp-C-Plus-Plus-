#pragma once
#include"myLinkedList.h"

template <class T>
class Stack
{
protected:
	myLinkedList<T> mll;
public:
	virtual void push(T) = 0; 	//add Value
	virtual T pop() = 0;		//remove Value
	virtual T top() = 0;
	virtual bool isEmpty() = 0;
	Stack();
};

template <class T>
Stack<T>::Stack()
{

}