#include"myLinkedList.h"
int main()
{
   //Creating the empty LinkedList
   myLinkedList mll;
   //Checking insertAtTail function
   mll.insertAtTail(12);
   mll.insertAtTail(13);
   mll.insertAtTail(14);
   //Checking insertAtHead function
   mll.insertAtHead(10);
   //Checking display function
   
   myLinkedList mll2(mll);
   mll.deleteFromHead();
   mll.deleteFromTail();
   mll.display();
   myLinkedList mll3;
   mll3=mll2;
   std::cout<<"second LinkedList "<<std::endl;
   mll3.display();
   mll2.deleteFromHead();
   mll2.deleteFromTail();
  
   
   std::cout<<"third LinkedList "<<std::endl;
   mll2.display();
   return 0;
}
