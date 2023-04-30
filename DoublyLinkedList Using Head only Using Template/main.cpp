#include"myLinkedList.h"
int main()
{
   //Creating the empty LinkedList
   myLinkedList<char> mll;
   //Checking insertAtTail function
   mll.insertAtTail('a');
   mll.insertAtTail('e');
   mll.insertAtTail('i');
   //Checking insertAtHead function
   mll.insertAtHead('o');
   //Checking display function
   mll.display();
   //Search the specific node from LinkedList
   std::cout<<"Find The Node In myLinkedList "<< mll.search('i')<<std::endl;
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
