#pragma once
#include <iostream>
using namespace std;

template <class T>
class Queue
{
protected:
	T* arr;
	int maxSize;
	int currentSize;
public:
	virtual void enqueue(T) = 0;
	virtual T dequeue() = 0;
	virtual bool isFull() = 0;
	virtual bool isEmpty() = 0;
	Queue(int);
};

template <class T>
Queue<T>::Queue(int s)
{
	arr = new T[s];
	maxSize = s;
	currentSize = 0;
}