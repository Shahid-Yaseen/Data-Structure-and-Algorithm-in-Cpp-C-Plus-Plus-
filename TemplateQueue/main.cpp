
#include <iostream>
#include"MyQueue.h"


int main()
{
   MyQueue<char> que(9);
   //checking whether isEmpty function works correctly
   std::cout<<que.deQueue()<<std::endl;
   //enQueue the values in Queue
   que.enQueue('H');
   que.enQueue('e');
   que.enQueue('l');
   que.enQueue('l');
   que.enQueue('o');
   que.enQueue('U');
   que.enQueue('s');
   que.enQueue('e');
   que.enQueue('r');
   //checking isFull function by putting values more than size
   que.enQueue('?');
   //displaying the Queue
   que.display();
   //deQueue values from Queue
   std::cout<<"deQueue value is :"<<que.deQueue()<<std::endl;
   std::cout<<"deQueue value is :"<<que.deQueue()<<std::endl;
   que.display();
   
}