#include"Queue.h"
//There is no semantic difference between class and typename in a type-parameter-key
template <class Type>
class MyQueue:public Queue<Type>{
    public:
    MyQueue(int);
    void enQueue(Type);
    Type deQueue();
    bool isEmpty();
    bool isFull();
    void display();
};
//Time Complexity => O(1)
template<class Type>
MyQueue<Type>::MyQueue(int maxSize):Queue<Type>(maxSize){}
//Time Complexity => O(1)
template<class Type>
void MyQueue<Type>::enQueue(Type value){
    //check if Queue is not full than enQueue value otherwise run else part
    if(!isFull()){
      Queue<Type>::arr[Queue<Type>::currentSize]=value;
      Queue<Type>::currentSize++;
    }
    else
    std::cout<<"Queue is Already Full "<<std::endl;
}
//Time Complexity => O(N)
template<class Type>
Type MyQueue<Type>::deQueue(){
    //checking the Queue if Empty return zero
      if(isEmpty()){
         std::cout<<"Queue is Empty Returning Zero"<<std::endl;
         return 0;
      }
      //storing the first value in integer so that we can return it
      Type returningValue=Queue<Type>::arr[0];
      //as one value is deQueue from Queue decrease the currentSize by one
      Queue<Type>::currentSize--;
      for(int i=0;i<Queue<Type>::currentSize;i++){
          Queue<Type>::arr[i]=Queue<Type>::arr[i+1];
      }
      return returningValue;
}
//Time Complexity => O(1)
template<class Type>
bool MyQueue<Type>::isEmpty(){
    if(Queue<Type>::currentSize==0){
        return true;
    }
    return false;
}
//Time Complexity => O(1)
template<class Type>
bool MyQueue<Type>::isFull(){
    if(Queue<Type>::currentSize==Queue<Type>::maxSize){
        return true;
    }
    else{
        return false;
    }
}
//Time Complexity => O(N)
template<class Type>
void MyQueue<Type>::display(){
    std::cout<<"currentSize "<<Queue<Type>::currentSize<<std::endl;
    std::cout<<"MaxSize is "<<Queue<Type>::maxSize<<std::endl;
    for(int i=0;i<Queue<Type>::currentSize;i++){
        std::cout<<i<<" : "<<Queue<Type>::arr[i]<<std::endl;
    }
}
//Note In some compiler you don't need to add scope resolution Operator before every parent attribute in class templates