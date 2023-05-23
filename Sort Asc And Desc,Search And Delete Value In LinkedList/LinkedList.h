#pragma once
#include"Node.h"

class LinkedList{
protected:
  //Head will point to the head of LinkedList
  Node* tail;
  
public:
  //Default Constructor
  LinkedList();
  //All basic functions of LinkedList are pure virtual which means they will be overWrite in child class
  //InsertAtTail will take one value and insert one Node at Tail with that value
  virtual void insertAtTail(int)=0;
  //InsertAtHead will take one value and insert one Node at head with that value 
  virtual void insertAtHead(int)=0;
  //DeleteFromHead will delete the Node from head
  virtual int deleteFromHead()=0;
  //DeleteFromTail will delete the Node from tail
  virtual int deleteFromTail()=0;
  //Search will take one value and check it with all Node's value and return true if find it otherwise return false
  virtual bool search(int)=0;
  //Display will display all Node's values
  virtual void display()=0;
  //Destructor
  ~LinkedList();
};

LinkedList::LinkedList(){
    //At start head will contain nullptr which shows the emptyness of LinkedList
    tail=nullptr;
}
LinkedList::~LinkedList(){
    delete tail;
}
