#include"Queue.h"
class MyQueue:public Queue{
  protected:
    int front,rear;
    public:
    MyQueue(int);
    void enQueue(int);
    int deQueue();
    bool isEmpty();
    bool isFull();
    void display();
};
//Time Complexity => O(1)
MyQueue::MyQueue(int maxSize):Queue(maxSize){
    front=0;
    rear=0;
}
//Time Complexity => O(1)
void MyQueue::enQueue(int value){
    //check if Queue is not full than enQueue value otherwise run else part
    if(!isFull()){
        //rear%maxSize will always be between 0 to maxSize  
      arr[rear%maxSize]=value;
      currentSize++;
      rear++;
    }
    else
    std::cout<<"Queue is Already Full "<<std::endl;
}
//Time Complexity => O(1)
int MyQueue::deQueue(){
    //checking the Queue if Empty return zero
      if(isEmpty()){
         std::cout<<"Queue is Empty Returning Zero"<<std::endl;
         return 0;
      }
      //storing the first value in integer so that we can return it
      int returningValue=arr[front%maxSize];
      front++;
      //as one value is deQueue from Queue decrease the currentSize by one
      currentSize--;
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
    std::cout<<"Front is "<<front<<std::endl;
    std::cout<<"rear is "<<rear<<std::endl;
    for(int i=front;i<rear;i++){
        std::cout<<i%maxSize<<" : "<<arr[i%maxSize]<<std::endl;
    }
}