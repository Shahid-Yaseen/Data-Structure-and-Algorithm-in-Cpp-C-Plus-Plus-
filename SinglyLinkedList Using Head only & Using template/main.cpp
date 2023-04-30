#include"myLinkedList.h"
int main()
{
   //Creating the empty LinkedList
   myLinkedList<int> mll;
   //Checking insertAtTail function
   mll.insertAtTail(12);
   mll.insertAtTail(13);
   mll.insertAtTail(14);
   //Checking insertAtHead function
   mll.insertAtHead(10);
   //Checking display function
   mll.display();
   //Search the specific node from LinkedList
   std::cout<<"Find The Node In myLinkedList "<< mll.search(99)<<std::endl;
   //Checking deleteFromHead function
   std::cout<<" deleteFromHead "<<mll.deleteFromHead()<<std::endl;
   //Checking deleteFromTail function
   std::cout<<" deleteFromTail "<<mll.deleteFromTail()<<std::endl;
   std::cout<<" deleteFromHead "<<mll.deleteFromHead()<<std::endl;
   std::cout<<" deleteFromTail "<<mll.deleteFromTail()<<std::endl;
   //Checking deleteFromHead function by deleting Node from empty LinkedList
   std::cout<<" deleteFromHead "<<mll.deleteFromHead()<<std::endl;
   //Checking deleteFromTail function by deleting Node from empty LinkedList
   std::cout<<" deleteFromTail "<<mll.deleteFromTail()<<std::endl;
   return 0;
}
