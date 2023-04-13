#include"Stack.h"
//There is no semantic difference between class and typename in a type-parameter-key
template <class Type>
class MyStack:public Stack<Type>{
    public:
    MyStack(int);
    void push(Type);
    Type pop();
    bool isEmpty();
    bool isFull();
    void display();
};
//Time Complexity => O(1)
template<class Type>
MyStack<Type>::MyStack(int maxSize):Stack<Type>(maxSize){}
//Time Complexity => O(1)
template<class Type>
void MyStack<Type>::push(Type value){
    //check if Stack is not full than push value otherwise run else part
    if(!isFull()){
      Stack<Type>::arr[Stack<Type>::currentSize]=value;
      Stack<Type>::currentSize++;
    }
    else
    std::cout<<"Stack is Already Full "<<std::endl;
}
//Time Complexity => O(N)
template<class Type>
Type MyStack<Type>::pop(){
    //checking the Stack if Empty return zero
      if(isEmpty()){
         std::cout<<"Stack is Empty Returning Zero"<<std::endl;
         return 0;
      }
      
      //as one value is popping from Stack decrease the currentSize by one
      return  Stack<Type>::arr[--Stack<Type>::currentSize];
}
//Time Complexity => O(1)
template<class Type>
bool MyStack<Type>::isEmpty(){
    if(Stack<Type>::currentSize==0){
        return true;
    }
    return false;
}
//Time Complexity => O(1)
template<class Type>
bool MyStack<Type>::isFull(){
    if(Stack<Type>::currentSize==Stack<Type>::maxSize){
        return true;
    }
    else{
        return false;
    }
}
//Time Complexity => O(N)
template<class Type>
void MyStack<Type>::display(){
    std::cout<<"currentSize "<<Stack<Type>::currentSize<<std::endl;
    std::cout<<"MaxSize is "<<Stack<Type>::maxSize<<std::endl;
    for(int i=0;i<Stack<Type>::currentSize;i++){
        std::cout<<i<<" : "<<Stack<Type>::arr[i]<<std::endl;
    }
}
//Note In some compiler you don't need to add scope resolution Operator before every parent attribute in class templates