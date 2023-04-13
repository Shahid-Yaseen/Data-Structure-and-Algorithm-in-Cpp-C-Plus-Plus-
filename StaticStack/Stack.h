#include<iostream>
class Stack{
    protected:
    int* arr;
    int maxSize,currentSize;
    public:
    Stack();
    virtual void push(int)=0;
    virtual int pop()=0;
    virtual int top()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    Stack(int);
    ~Stack();
};
//Time Complexity => O(1)
Stack::Stack(){
    maxSize=0;
    currentSize=0;
}
//Time Complexity => O(1)
Stack::~Stack(){
   delete arr; 
}
//Time Complexity => O(1)
Stack::Stack(int maxSize){
    this->maxSize=maxSize;
    arr=new int[maxSize];
    currentSize=0;
}