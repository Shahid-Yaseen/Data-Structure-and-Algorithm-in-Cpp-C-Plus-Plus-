#include"MyLinkedList.h"

int main()
{
   myLinkedList mll;
   mll.insertAtHead(12);
   mll.insertAtHead(13);
   mll.insertAtHead(14);
   mll.insertAtHead(15);
   mll.insertAtHead(16);
   mll.insertAtTail(-99);
   mll.display();
   std::cout<<"The Nth Number in LinkedList Is "<<mll.findKthToLast(4)<<std::endl;
}
