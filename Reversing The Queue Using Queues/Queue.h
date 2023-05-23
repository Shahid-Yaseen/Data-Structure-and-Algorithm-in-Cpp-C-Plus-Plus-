#include<iostream>
class Queue{
    protected:
    int* arr;
    int maxSize,currentSize;
    public:
    Queue();
    virtual void enQueue(int)=0;
    virtual int deQueue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    Queue(int);
    ~Queue();
};
//Time Complexity => O(1)
Queue::Queue(){
    maxSize=0;
    currentSize=0;
}
//Time Complexity => O(1)
Queue::~Queue(){
   delete arr; 
}
//Time Complexity => O(1)
Queue::Queue(int maxSize){
    this->maxSize=maxSize;
    arr=new int[maxSize];
    currentSize=0;
}