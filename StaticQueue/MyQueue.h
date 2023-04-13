#include"Queue.h"
class MyQueue:public Queue{
    public:
    MyQueue(int);
    void enQueue(int);
    int deQueue();
    bool isEmpty();
    bool isFull();
    void display();
};
//Time Complexity => O(1)
MyQueue::MyQueue(int maxSize):Queue(maxSize){}
//Time Complexity => O(1)
void MyQueue::enQueue(int value){
    //check if Queue is not full than enQueue value otherwise run else part
    if(!isFull()){
      arr[currentSize]=value;
      currentSize++;
    }
    else
    std::cout<<"Queue is Already Full "<<std::endl;
}
//Time Complexity => O(N)
int MyQueue::deQueue(){
    //checking the Queue if Empty return zero
      if(isEmpty()){
         std::cout<<"Queue is Empty Returning Zero"<<std::endl;
         return 0;
      }
      //storing the first value in integer so that we can return it
      int returningValue=arr[0];
      //as one value is deQueue from Queue decrease the currentSize by one
      currentSize--;
      for(int i=0;i<currentSize;i++){
          arr[i]=arr[i+1];
      }
      return returningValue;
}
//Time Complexity => O(1)
bool MyQueue::isEmpty(){
    if(currentSize==0){
        return true;
    }
    return false;
}
//Time Complexity => O(1)
bool MyQueue::isFull(){
    if(currentSize==maxSize){
        return true;
    }
    else{
        return false;
    }
}
//Time Complexity => O(N)
void MyQueue::display(){
    std::cout<<"currentSize "<<currentSize<<std::endl;
    std::cout<<"MaxSize is "<<maxSize<<std::endl;
    for(int i=0;i<currentSize;i++){
        std::cout<<i<<" : "<<arr[i]<<std::endl;
    }
}