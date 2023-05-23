#pragma once
#include "Queue.h"

template <class T>
class myQueue :public Queue<T>
{
public:
	void enqueue(T);
	T dequeue();
	T front();
	myQueue();
	bool isEmpty();

	void display();
};



template <class T>	
bool myQueue<T>::isEmpty()
{
	myQueue<T>::mll.isEmpty();
}

template <class T>	
void myQueue<T>::display()
{
	myQueue<T>::mll.display();
}


template <class T>	
myQueue<T>::myQueue():Queue<T>()
{

}

template <class T>	
void myQueue<T>::enqueue(T value)
{
  myQueue<T>::mll.insertAtTail(value);
}


template <class T>	
T myQueue<T>::dequeue()
{
    return myQueue<T>::mll.deleteFromHead();
}
template <class T>	
T myQueue<T>::front()
{
    T temp= myQueue<T>::mll.deleteFromHead();
    myQueue<T>::mll.insertAtHead(temp);
    return temp;
}