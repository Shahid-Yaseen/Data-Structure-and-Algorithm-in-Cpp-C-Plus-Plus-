#pragma once
#include"Node.h"


class LinkedList{
protected:
  //Head will point to the head of LinkedList
  Node* head;
  
public:
  //Default Constructor
  LinkedList();
  //All basic functions of LinkedList are pure virtual which means they will be overWrite in child class
  //InsertAtTail will take one value and insert one Node at Tail with that value
  virtual void insertAtTail(Node)=0;
  //InsertAtHead will take one value and insert one Node at head with that value 
  virtual void insertAtHead(Node)=0;
  //DeleteFromHead will delete the Node from head
  virtual Node deleteFromHead()=0;
  //DeleteFromTail will delete the Node from tail
  virtual Node deleteFromTail()=0;
  //Search will take one value and check it with all Node's value and return true if find it otherwise return false
  virtual bool search(Node)=0;
  //Display will display all Node's values
  virtual void display()=0;
  //Destructor
  ~LinkedList();
};

LinkedList::LinkedList(){
    //At start head will contain nullptr which shows the emptyness of LinkedList
    head=nullptr;
  
}

LinkedList::~LinkedList(){
    delete head;
   
}
