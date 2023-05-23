#include"MyLinkedList.h"
int main()
{
    MyLinkedList obj;
    obj.insertAtTail(8);
	obj.insertAtTail(-3);
	obj.insertAtTail(0);
	obj.insertAtTail(10);
	obj.insertAtTail(9);
	obj.insertAtHead(356);
	obj.display();
	std::cout<<"Maximum Number in LinkedList Is "<<obj.findMaximum()<<std::endl;
	std::cout<<"Second Maximum Number in LinkedList Is "<<obj.findSecondMaximum()<<std::endl;
	std::cout<<"Sum of All Numbers in LinkedList Is "<<obj.findSum()<<std::endl;
    //obj.findFac();
   // obj.deleteEvenNodes();
    obj.sort();
    obj.display();
    return 0;
}