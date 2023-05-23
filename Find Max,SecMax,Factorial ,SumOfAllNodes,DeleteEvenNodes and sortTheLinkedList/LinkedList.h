#pragma once
#include"Node.h"
class LinkedList{
 protected:
 Node* head;
 public:
 LinkedList();
 virtual void insertAtHead(int)=0;
 virtual void insertAtTail(int)=0;
 virtual void display()=0;
};
LinkedList::LinkedList(){
    head=nullptr;
}