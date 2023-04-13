#include"Stack.h"
class MyStack:public Stack{
    public:
    MyStack(int);
    void push(int);
    int pop();
    int top();
    bool isEmpty();
    bool isFull();
    void display();
};
//Time Complexity => O(1)
MyStack::MyStack(int maxSize):Stack(maxSize){}
//Time Complexity => O(1)
void MyStack::push(int value){
    //check if Stack is not full than push value otherwise run else part
    if(!isFull()){
      arr[currentSize]=value;
      currentSize++;
    }
    else
    std::cout<<"Stack is Already Full "<<std::endl;
}
//Time Complexity => O(N)
int MyStack::pop(){
    //checking the Stack if Empty return zero
      if(isEmpty()){
         std::cout<<"Stack is Empty Returning Zero"<<std::endl;
         return 0;
      }
     
      //as one value is Popping from Stack decrease the currentSize by one
      return arr[--currentSize];
}
//Time Complexity => O(N)
int MyStack::top(){
    //checking the Stack if Empty return zero
      if(isEmpty()){
         std::cout<<"Stack is Empty Returning Zero"<<std::endl;
         return 0;
      }
     
      //as we want to show pop value and don't want to remove it
      return arr[currentSize-1];
}
//Time Complexity => O(1)
bool MyStack::isEmpty(){
    if(currentSize==0){
        return true;
    }
    return false;
}
//Time Complexity => O(1)
bool MyStack::isFull(){
    if(currentSize==maxSize){
        return true;
    }
    else{
        return false;
    }
}
//Time Complexity => O(N)
void MyStack::display(){
    std::cout<<"currentSize "<<currentSize<<std::endl;
    std::cout<<"MaxSize is "<<maxSize<<std::endl;
    for(int i=0;i<currentSize;i++){
        std::cout<<i<<" : "<<arr[i]<<std::endl;
    }
}