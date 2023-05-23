
#include <iostream>
#include"myLinkedList.h"

int main()
{
  myLinkedList mll;
  mll.insertAtHead(12);
  mll.insertAtHead(76);
  mll.insertAtTail(777);
//   mll.sortDesc();
//   mll.sortDesc();
//   std::cout<<mll.deleteFromHead()<<std::endl;
//   std::cout<<mll.deleteFromTail()<<std::endl;
//   std::cout<<"display"<<std::endl;

//   std::cout<<mll.search(777)<<std::endl;
  std::cout<<mll.deleteValue(76)<<std::endl;
  mll.display();
}