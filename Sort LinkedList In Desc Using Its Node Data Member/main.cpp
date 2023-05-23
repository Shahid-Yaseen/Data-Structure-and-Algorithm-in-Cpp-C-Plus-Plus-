
#include"myLinkedList.h"

int main()
{
    myLinkedList mll;
    Node n(1261,"shahid"),n2(695,"AD"),n3(695,"AD");
   
    mll.insertAtHead(n);
    mll.insertAtHead(n2);
   
    
  // mll.sortByIDDesc();
   mll.display();

    return 0;
}