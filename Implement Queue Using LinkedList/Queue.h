#pragma once
#include"myLinkedList.h"

template <class T>
class Queue
{
protected:
  myLinkedList<T> mll;
public:
	virtual void enqueue(T) = 0;
	virtual T dequeue() = 0;
    virtual T front()=0;
	virtual bool isEmpty() = 0;
	Queue();
};

template <class T>
Queue<T>::Queue()
{

}