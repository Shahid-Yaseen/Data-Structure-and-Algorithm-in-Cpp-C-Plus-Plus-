#include <iostream>
#include"MyQueue.h"
int main()
{
   MyQueue que(10);
   //checking whether isEmpty function works correctly
   std::cout<<que.deQueue()<<std::endl;
   //enQueue the values in Queue
   que.enQueue(100);
   que.enQueue(99);
   que.enQueue(88);
   que.enQueue(77);
   que.enQueue(66);
   que.enQueue(55);
   que.enQueue(44);
   que.enQueue(999);
   que.enQueue(978);
   que.enQueue(-3);
  
   //displaying the Queue
  std::cout<<"Before Reverse"<<std::endl;
  que.display();
  std::cout<<"After Reverse"<<std::endl;
  que.reverseQueue();
  que.display();
  
   
}