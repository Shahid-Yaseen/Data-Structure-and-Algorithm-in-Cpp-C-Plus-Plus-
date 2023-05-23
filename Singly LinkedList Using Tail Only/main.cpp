
#include"myLinkedList.h"



int main()
{
    myLinkedList mll;
    mll.insertAtHead(10);
    mll.insertAtHead(66);
    mll.insertAtHead(98);
    mll.insertAtHead(100);
    mll.insertAtHead(88);
    mll.insertAtTail(99);
    mll.insertAtTail(-23);
    mll.insertAtTail(-958);
    mll.insertAtTail(-774);
    std::cout<<"Delete From Head "<<mll.deleteFromHead()<<std::endl;
    std::cout<<"Delete From Head "<<mll.deleteFromHead()<<std::endl;
    std::cout<<"Delete From Tail "<<mll.deleteFromTail()<<std::endl;
  
   
    mll.display();
}
