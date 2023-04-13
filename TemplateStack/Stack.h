#include<iostream>
//There is no semantic difference between class and typename in a type-parameter-key
template <class Type>
class Stack{
    protected:
    Type* arr;
    int maxSize,currentSize;
    public:
    Stack();
    virtual void push(Type)=0;
    virtual Type pop()=0;
    virtual bool isEmpty()=0;
    virtual bool isFull()=0;
    Stack(int);
    ~Stack();
};
//Time Complexity => O(1)
template<class Type>
Stack<Type>::Stack(){
    maxSize=0;
    currentSize=0;
}
//Time Complexity => O(1)
template<class Type>
Stack<Type>::~Stack(){
   delete arr; 
}
//Time Complexity => O(1)
template<class Type>
Stack<Type>::Stack(int maxSize){
    this->maxSize=maxSize;
    arr=new Type[maxSize];
    currentSize=0;
}