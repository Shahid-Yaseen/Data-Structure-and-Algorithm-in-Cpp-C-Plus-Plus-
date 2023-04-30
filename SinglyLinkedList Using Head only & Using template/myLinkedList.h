#pragma once
#include"LinkedList.h"
template <typename T>
class myLinkedList: public LinkedList<T>{
  public:
  //Default Constructor
   myLinkedList();
   //Abstract Class functions over-ridding
   void insertAtTail(T);
   void insertAtHead(T);
   T deleteFromHead();
   T deleteFromTail();
   bool search(T);
   void display();
};
template <typename T>
void myLinkedList<T>::display(){
    //Create temp Node which will start pointing to the head
    Node<T>* temp=LinkedList<T>::head;
    //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //Display the Node value
        std::cout<<temp->data<<std::endl;
        //Move the pointer to the next Node by using next Node pointer
        temp=temp->next;
    }
}
template <typename T>
bool myLinkedList<T>::search(T value){
    //Create temp Node which will start pointing to the head
    Node<T>* temp=LinkedList<T>::head;
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
template <typename T>
void myLinkedList<T>::insertAtHead(T value){
    //Create the new Node which will be insert in LinkedList
    Node<T>* newNode=new Node<T>;
    //Store the value on that new Node 
    newNode->data=value;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //For the insertion of Node in empty LinkedList
    if(LinkedList<T>::head==nullptr){
        //the head will start pointing to the new Node
        LinkedList<T>::head=newNode;
    }//For the rest of Node's
    else{
        //New Node next pointer will start pointing to the next
        newNode->next=LinkedList<T>::head;
        //New Node will become the head of LinkedList
        LinkedList<T>::head=newNode;
    }
}
template <typename T>
T myLinkedList<T>::deleteFromHead(){
       //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
       if(LinkedList<T>::head==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
       //For the single Node in LinkedList
       else if(LinkedList<T>::head->next==nullptr){
           //Store the head Node value in variable
           T returningValue=LinkedList<T>::head->data;
           //delete the head Node
           delete LinkedList<T>::head;
           //head  again store nullptr which will show emptyness of LinkedList
           LinkedList<T>::head=nullptr;
           return returningValue;
       }
       else{
            //Store the head Node value in variable
           T returningValue=LinkedList<T>::head->data;
           //Store the head pointer memory in temp pointer
           Node<T>* temp=LinkedList<T>::head;
           //Move the head to its next Node
           LinkedList<T>::head=LinkedList<T>::head->next;
           //delete the temp pointer memory
           delete temp;
           //store the nullptr in temp pointer
           temp=nullptr;
           return returningValue;
       }
      
       return 0;
}
template <typename T>
T myLinkedList<T>::deleteFromTail(){
        //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
        if(LinkedList<T>::head==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
        //For the single Node in LinkedList
       else if(LinkedList<T>::head->next==nullptr){
           //Store the head Node value in variable, hence head and tail pointing to the same memory
           T returningValue=LinkedList<T>::head->data;
           //delete the head Node
           delete LinkedList<T>::head;
           //head again store nullptr which will emptyness of LinkedList
           LinkedList<T>::head=nullptr;
         
           return returningValue;
       }
       else{
            //Create temp Node which will start pointing to the head
            Node<T>* temp=LinkedList<T>::head;
            //execut the loop until the tail pointer comes
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }
            //Store the tail Node value in variable
            T returningValue=temp->next->data;
            //Delete the tail pointer memory
            delete temp->next;
            //Store the nullptr in the next pointer of the tail 
            temp->next=nullptr;
            return returningValue;
       }
        
   }
 
template <typename T>
void myLinkedList<T>::insertAtTail(T value){
    //Create the new Node which will be insert in LinkedList
    Node<T>* newNode=new Node<T>;
    //Store the value on that new Node 
    newNode->data=value;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //For the insertion of Node in empty LinkedList
    if(LinkedList<T>::head==nullptr){
        //Both head will start pointing to the new Node
        LinkedList<T>::head=newNode;
      
    }//For the rest of Node's
    else{
         //Create temp Node which will start pointing to the head
            Node<T>* temp=LinkedList<T>::head;
            //execut the loop until the tail pointer comes
            while(temp->next!=nullptr){
                temp=temp->next;
            }
        //Store new Node memory on tail next pointer 
        temp->next=newNode;
       
    }
}
template <typename T>
myLinkedList<T>::myLinkedList():LinkedList<T>(){
    
}