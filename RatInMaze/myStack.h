#pragma once
#include "Stack.h"
#include<iostream>


class myStack :public Stack
{
public:
	void push(char);
	char pop();

	char top();
	myStack(int ss);
	bool isEmpty();
	bool isFull();
	void display();

};


bool myStack::isFull()
{
	if (maxSize == currentSize)
		return true;

	return false;
}


bool myStack::isEmpty()
{
	if (currentSize == 0)
		return true;

	return false;
}


void myStack::display()
{
	std::cout << "Maximum Size: " << maxSize << std::endl;
	std::cout << "Current Size: " << currentSize << std::endl;

	for (int i = 0; i < currentSize; i++)
		std::cout << i << ". " << arr[i] << std::endl;
}



myStack::myStack(int ss):Stack(ss)
{

}


void myStack::push(char value)
{
	if (!isFull())
	{
		arr[currentSize] = value;
		currentSize++;
	}

	else
		std::cout << "Stack is already FULL" << std::endl;
}



char myStack::pop()
{
	if (isEmpty())
	{
		std::cout << "Stack is Empty, returning ZERO" << std::endl;
		return 0;
	}

	currentSize--;
	return arr[currentSize];
}



char myStack::top()
{
	if (isEmpty())
	{
	
		return 0;
	}

	return arr[currentSize-1];
}