#pragma once
#include "Queue.h"

template <class T>
class myQueue :public Queue<T>
{
public:
	void enqueue(T);
	T dequeue();
	myQueue(int ss);
	bool isEmpty();
	bool isFull();
	void display();
};

template <class T>
bool myQueue<T>::isFull() //O(1)
{
	if (Queue<T>::maxSize == Queue<T>::currentSize)
		return true;

	return false;
}

template <class T>	//O(1)
bool myQueue<T>::isEmpty()
{
	if (Queue<T>::currentSize == 0)
		return true;

	return false;
}

template <class T>	//O(n)
void myQueue<T>::display()
{
	cout << "Maximum Size: " << Queue<T>::maxSize << endl;
	cout << "Current Size: " << Queue<T>::currentSize << endl;

	for (int i = 0; i < Queue<T>::currentSize; i++)
		cout << i << ". " << Queue<T>::arr[i] << endl;
}


template <class T>	//O(1)
myQueue<T>::myQueue(int ss):Queue<T>(ss)
{

}

template <class T>	//O(1)
void myQueue<T>::enqueue(T value)
{
	if (!isFull())
	{
		Queue<T>::arr[Queue<T>::currentSize] = value;
		Queue<T>::currentSize++;
	}

	else
		cout << "Queue is already FULL" << endl;
}


template <class T>	//O(n)
T myQueue<T>::dequeue()
{
	if (isEmpty())
	{
		T temp;
		cout << "Queue is Empty, returning ZERO" << endl;
		return temp;
	}

	T returningValue = Queue<T>::arr[0];
	Queue<T>::currentSize--;

	for (int i = 0; i < Queue<T>::currentSize ; i++)
		Queue<T>::arr[i] = Queue<T>::arr[i + 1];

	return returningValue;
}