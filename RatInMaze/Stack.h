#pragma once
#include<iostream>
using namespace std;
class Stack
{
protected:
	char* arr;
	int maxSize;
	int currentSize;
public:
	virtual void push(char) = 0; 	//add Value
	virtual char pop() = 0;		//remove Value
	virtual char top() = 0;
	virtual bool isFull() = 0;
	virtual bool isEmpty() = 0;
	Stack(int);
};

Stack::Stack(int s)
{
	arr = new char[s];
	maxSize = s;
	currentSize = 0;
}