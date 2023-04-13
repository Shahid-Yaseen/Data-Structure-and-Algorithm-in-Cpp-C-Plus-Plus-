#include<iostream>
//There is no semantic difference between class and typename in a type-parameter-key
template <class Type>
class Queue{
    protected:
    Type* arr;
    int maxSize,currentSize;
    public:
    Queue();
    virtual void enQueue(Type)=0;
    virtual Type deQueue()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    Queue(int);
    ~Queue();
};
//Time Complexity => O(1)
template<class Type>
Queue<Type>::Queue(){
    maxSize=0;
    currentSize=0;
}
//Time Complexity => O(1)
template<class Type>
Queue<Type>::~Queue(){
   delete arr; 
}
//Time Complexity => O(1)
template<class Type>
Queue<Type>::Queue(int maxSize){
    this->maxSize=maxSize;
    arr=new Type[maxSize];
    currentSize=0;
}