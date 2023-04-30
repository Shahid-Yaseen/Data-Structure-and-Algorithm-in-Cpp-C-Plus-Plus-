#pragma once
#include"Node.h"
template <typename T>
class LinkedList{
protected:
  //Head will point to the head of LinkedList
  Node<T>* head;
  
public:
  //Default Constructor
  LinkedList();
  //All basic functions of LinkedList are pure virtual which means they will be overWrite in child class
  //InsertAtTail will take one value and insert one Node at Tail with that value
  virtual void insertAtTail(T)=0;
  //InsertAtHead will take one value and insert one Node at head with that value 
  virtual void insertAtHead(T)=0;
  //DeleteFromHead will delete the Node from head
  virtual T deleteFromHead()=0;
  //DeleteFromTail will delete the Node from tail
  virtual T deleteFromTail()=0;
  //Search will take one value and check it with all Node's value and return true if find it otherwise return false
  virtual bool search(T)=0;
  //Display will display all Node's values
  virtual void display()=0;
  //Destructor
  ~LinkedList();
};
template <typename T>
LinkedList<T>::LinkedList(){
    //At start  head will contain nullptr which shows the emptyness of LinkedList
    head=nullptr;
}
template <typename T>
LinkedList<T>::~LinkedList(){
    delete head;
}
