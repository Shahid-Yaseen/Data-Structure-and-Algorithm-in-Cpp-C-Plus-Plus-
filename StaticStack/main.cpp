#include <iostream>
#include"MyStack.h"
int main()
{
   MyStack stk(10);
   //checking whether isEmpty function works correctly
   std::cout<<stk.pop()<<std::endl;
   //pushing the values in Stack
   stk.push(100);
   stk.push(99);
   stk.push(88);
   stk.push(77);
   stk.push(66);
   stk.push(55);
   stk.push(44);
   stk.push(999);
   stk.push(987);
   stk.push(-3);
   //checking isFull function by putting values more than size
   stk.push(1024);
   //displaying the Stack
   stk.display();
   //Popping values from Stack
   std::cout<<stk.pop()<<std::endl;
   std::cout<<stk.pop()<<std::endl;
   stk.display();
   
}