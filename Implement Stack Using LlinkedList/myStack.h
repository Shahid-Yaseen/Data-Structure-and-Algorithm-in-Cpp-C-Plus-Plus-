#pragma once
#include "Stack.h"

template <class T>
class myStack :public Stack<T>
{
public:
	void push(T);
	T pop();
	T top();
	myStack();
	bool isEmpty();

	void display();
};
template <class T>
bool myStack<T>::isEmpty()
{
   Stack<T>::mll.isEmpty();
}

template <class T>
void myStack<T>::display()
{
	Stack<T>::mll.display();
}


template <class T>
myStack<T>::myStack():Stack<T>()
{

}

template <class T>
void myStack<T>::push(T value)
{
     Stack<T>::mll.insertAtTail(value);
}


template <class T>
T myStack<T>::pop()
{
 return Stack<T>::mll.deleteFromTail();
}


template <class T>
T myStack<T>::top()
{
   T temp=Stack<T>::mll.deleteFromTail();
   Stack<T>::mll.insertAtTail(temp);
   return temp;
}