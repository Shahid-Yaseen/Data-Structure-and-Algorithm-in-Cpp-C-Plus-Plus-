#include <iostream>
#include"MyStack.h"
int main()
{
   MyStack<char> Stk(9);
   //checking whether isEmpty function works correctly
   std::cout<<Stk.pop()<<std::endl;
   //Pushing the values in Stack
   Stk.push('H');
   Stk.push('e');
   Stk.push('l');
   Stk.push('l');
   Stk.push('o');
   Stk.push('U');
   Stk.push('s');
   Stk.push('e');
   Stk.push('r');
   //checking isFull function by putting values more than size
   Stk.push('?');
   //displaying the Stack
   Stk.display();
   //popping values from Stack
   std::cout<<"Pop value is :"<<Stk.pop()<<std::endl;
   std::cout<<"Pop value is :"<<Stk.pop()<<std::endl;
   Stk.display();
   
}