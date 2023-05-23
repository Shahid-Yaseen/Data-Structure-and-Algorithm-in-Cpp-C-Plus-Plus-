#pragma once
#include"LinkedList.h"
class myLinkedList : public linkedList{
    public:
    myLinkedList();
    void insertAtHead(int);
    void insertAtTail(int);
    void display();
    int deleteFromTail();
    int deleteFromHead();
    bool isPalindrome();
};
 myLinkedList::myLinkedList():linkedList(){
   
 }
 bool myLinkedList::isPalindrome(){
      
       Node* first=tail->next;
       Node* last=tail;
       Node* head;
       while(first!=last){
           if(first->data!=last->data){
               return false;
           }
           first=first->next;
           head=first;
           while(head->next != last){
              head=head->next;
            }
            last=head;
            if(first->next==last){
                return false;
            }
            
       }
      
     return true; 
 }
void myLinkedList::insertAtHead(int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    if(tail==nullptr){
        tail=newNode;
        tail->next=newNode;
    }
    else{
        Node* temp=tail->next;
        newNode->next=temp;
        tail->next=newNode;
    }
}
void myLinkedList::insertAtTail(int value){
    Node* newNode=new Node;
    newNode->data=value;
    newNode->next=nullptr;
    if(tail==nullptr){
        tail=newNode;
        tail->next=newNode;
    }
    else{
        newNode->next=tail->next;
        tail->next=newNode;
        tail=newNode;
    } 
}
void myLinkedList::display(){
    
    Node* head=tail->next;
    while(head != tail){
        
        std::cout<<head->data<<std::endl;
        head=head->next;
    }
    std::cout<<head->data<<std::endl;
}
int myLinkedList::deleteFromTail(){
      if(tail==nullptr){
        std::cout<<"linkedList is empty"<<std::endl;
        return 0;
    }
    else if(tail==tail->next){
       int rv=tail->data;
       delete tail;
       tail=nullptr;
       return rv;
    }
    else{ 
    Node* head=tail->next;
    while(head->next != tail){
        head=head->next;
    }
    Node* temp=tail;
    head->next=tail->next;
    tail=head;
    int rv=temp->data;
    delete temp;
    temp=nullptr;
    return rv;
        
    }
    
}
int myLinkedList::deleteFromHead(){
    if(tail==nullptr){
        std::cout<<"linkedList is empty"<<std::endl;
        return 0;
    }
    else if(tail==tail->next){
       int rv=tail->data;
       delete tail;
       tail=nullptr;
       return rv;
    }
    else{ 
        Node* temp=tail->next->next;
        Node* temp2=tail->next;
        int rv=temp2->data;
        delete temp2;
        tail->next=temp;
        temp2=nullptr;
        return rv;}
}