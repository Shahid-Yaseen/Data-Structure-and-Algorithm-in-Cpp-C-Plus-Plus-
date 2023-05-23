#pragma once
#include "Node.h"
class linkedList{
    protected:
    Node* tail;
    public:
    linkedList();
    virtual void insertAtHead(int)=0;
    virtual void insertAtTail(int)=0;
    virtual void display()=0;
    virtual int deleteFromTail()=0;
    virtual int deleteFromHead()=0;
};
linkedList::linkedList(){
    tail=nullptr;
}