#pragma once
#include"LinkedList.h"
class myLinkedList: public LinkedList{
  public:
  //Default Constructor
   myLinkedList();
   //Abstract Class functions over-ridding
   void insertAtTail(int);
   void insertAtHead(int);
   int deleteFromHead();
   int deleteFromTail();
   bool search(int);
   void display();
};
void myLinkedList::display(){
    //Create temp Node which will start pointing to the head
    Node* temp=head;
    //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //Display the Node value
        std::cout<<temp->data<<std::endl;
        //Move the pointer to the next Node by using next Node pointer
        temp=temp->next;
    }
}
bool myLinkedList::search(int value){
    //Create temp Node which will start pointing to the head
    Node* temp=head;
     //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //If the value is found on any Node return True and function will terminate
       if(temp->data==value)
          return true;
        //If the value is not found Move the pointer to the next Node by using next Node pointer
        temp=temp->next;
    }
    //False will be returned if the function is not terminate above which means value not found
    return false;
}
void myLinkedList::insertAtHead(int value){
    //Create the new Node which will be insert in LinkedList
    Node* newNode=new Node;
    //Store the value on that new Node 
    newNode->data=value;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //Store the nullptr on previous Node pointer of that new Node
    newNode->previous=nullptr;
    //For the insertion of Node in empty LinkedList
    if(head==nullptr){
        //head will start pointing to the new Node
        head=newNode;
       
    }//For the rest of Node's
    else{
        //New Node next pointer will start pointing to the next
        newNode->next=head;
        //head previous will start pointing to the previous
        head->previous=newNode;
        //New Node will become the head of LinkedList
        head=newNode;
    }
}
int myLinkedList::deleteFromHead(){
       //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
       if(head==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
       //For the single Node in LinkedList
       else if(head->next==nullptr){
           //Store the head Node value in variable
           int returningValue=head->data;
           //delete the head Node
           delete head;
           //head & tail again store nullptr which will emptyness of LinkedList
           head=nullptr;
          
           return returningValue;
       }
       else{
            //Store the head Node value in variable
           int returningValue=head->data;
           //Store the head pointer memory in temp pointer
           Node* temp=head;
           //Move the head to its next Node
           head=head->next;
           //head previous pointer will store nullptr in it
           head->previous=nullptr;
           //delete the temp pointer memory
           delete temp;
           //store the nullptr in temp pointer
           temp=nullptr;
           return returningValue;
       }
     
       return 0;
}
   int myLinkedList::deleteFromTail(){
        //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
        if(head==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
        //For the single Node in LinkedList
       else if(head->next==nullptr){
           //Store the head Node value in variable, hence head and tail pointing to the same memory
           int returningValue=head->data;
           //delete the head Node
           delete head;
           //head & tail again store nullptr which will emptyness of LinkedList
           head=nullptr;
           return returningValue;
       }
       else{
            //Create temp Node which will start pointing to the head
            Node* temp=head;
            //execut the loop until the tail pointer comes
            while(temp->next!=nullptr){
                temp=temp->next;
            }
            //Store the tail Node value in variable
            int returningValue=temp->data;
            //Delete the tail pointer memory
            temp->previous->next=nullptr;
            delete temp;
            //Store the nullptr in the next pointer of the tail 
            temp=nullptr;
            return returningValue;
       }
        
   }
 

void myLinkedList::insertAtTail(int value){
    //Create the new Node which will be insert in LinkedList
    Node* newNode=new Node;
    //Store the value on that new Node 
    newNode->data=value;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //For the insertion of Node in empty LinkedList
    if(head==nullptr){
        //head and tail will start pointing to the new Node
        head=newNode;
       
    }//For the rest of Node's
    else{
         //Create temp Node which will start pointing to the head
            Node* temp=head;
            //execut the loop until the tail pointer comes
            while(temp->next!=nullptr){
                temp=temp->next;
            }
        
        //Store new Node memory on tail next pointer 
        temp->next=newNode;
        //Store tail memory on the new Node previous pointer 
        newNode->previous=temp;
       
    }
}
myLinkedList::myLinkedList():LinkedList(){
    
}