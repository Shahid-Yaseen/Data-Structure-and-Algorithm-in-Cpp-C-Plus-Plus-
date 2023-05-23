#include"myLinkedList.h"

int main()
{
  myLinkedList<Data> mll;
  Data data(1261,"SHAHID");
  Data data2(1262,"Haseeb"),data3(01,"rehan");
  mll.insertAtTail(data2);
  mll.insertAtTail(data3);
  mll.insertAtTail(data);
  mll.sortByName();  
  mll.display();
}
