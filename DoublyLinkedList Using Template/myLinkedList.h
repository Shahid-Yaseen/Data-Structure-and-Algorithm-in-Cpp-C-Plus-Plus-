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
    //Create temp Node<T> which will start pointing to the LinkedList<T>::head
    Node<T>* temp=LinkedList<T>::head;
    //execut the loop until the nullptr means the last Node<T> comes
    while(temp!=nullptr){
        //Display the Node<T> value
        std::cout<<temp->data<<std::endl;
        //Move the pointer to the next Node<T> by using next Node<T> pointer
        temp=temp->next;
    }
}
template <typename T>
bool myLinkedList<T>::search(T value){
    //Create temp Node<T> which will start pointing to the LinkedList<T>::head
    Node<T>* temp=LinkedList<T>::head;
     //execut the loop until the nullptr means the last Node<T> comes
    while(temp!=nullptr){
        //If the value is found on any Node<T> return True and function will terminate
       if(temp->data==value)
          return true;
        //If the value is not found Move the pointer to the next Node<T> by using next Node<T> pointer
        temp=temp->next;
    }
    //False will be returned if the function is not terminate above which means value not found
    return false;
}
template <typename T>
void myLinkedList<T>::insertAtHead(T value){
    //Create the new Node<T> which will be insert in LinkedList
    Node<T>* newNode=new Node<T>;
    //Store the value on that new Node<T> 
    newNode->data=value;
    //Store the nullptr on next Node<T> pointer of that new Node<T> 
    newNode->next=nullptr;
    //Store the nullptr on previous Node<T> pointer of that new Node<T>
    newNode->previous=nullptr;
    //For the insertion of Node<T> in empty LinkedList
    if(LinkedList<T>::head==nullptr&&LinkedList<T>::tail==nullptr){
        //Both LinkedList<T>::head and LinkedList<T>::tail will start pointing to the new Node<T>
        LinkedList<T>::head=newNode;
        LinkedList<T>::tail=newNode;
    }//For the rest of Node<T>'s
    else{
        //New Node<T> next pointer will start pointing to the next
        newNode->next=LinkedList<T>::head;
        //LinkedList<T>::head previous will start pointing to the previous
        LinkedList<T>::head->previous=newNode;
        //New Node<T> will become the LinkedList<T>::head of LinkedList
        LinkedList<T>::head=newNode;
    }
}
template <typename T>
T myLinkedList<T>::deleteFromHead(){
       //First of All check even the Node<T> is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
       if(LinkedList<T>::head==nullptr&&LinkedList<T>::tail==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
       //For the single Node<T> in LinkedList
       else if(LinkedList<T>::head==LinkedList<T>::tail){
           //Store the LinkedList<T>::head Node<T> value in variable
           T returningValue=LinkedList<T>::head->data;
           //delete the LinkedList<T>::head Node<T>
           delete LinkedList<T>::head;
           //LinkedList<T>::head & LinkedList<T>::tail again store nullptr which will emptyness of LinkedList
           LinkedList<T>::head=nullptr;
           LinkedList<T>::tail=nullptr;
           return returningValue;
       }
       else{
            //Store the LinkedList<T>::head Node<T> value in variable
           T returningValue=LinkedList<T>::head->data;
           //Store the LinkedList<T>::head pointer memory in temp pointer
           Node<T>* temp=LinkedList<T>::head;
           //Move the LinkedList<T>::head to its next Node<T>
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
        //First of All check even the Node<T> is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
        if(LinkedList<T>::head==nullptr&&LinkedList<T>::tail==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
        //For the single Node<T> in LinkedList
       else if(LinkedList<T>::head==LinkedList<T>::tail){
           //Store the LinkedList<T>::head Node<T> value in variable, hence LinkedList<T>::head and LinkedList<T>::tail pointing to the same memory
           T returningValue=LinkedList<T>::head->data;
           //delete the LinkedList<T>::head Node<T>
           delete LinkedList<T>::head;
           //LinkedList<T>::head & LinkedList<T>::tail again store nullptr which will emptyness of LinkedList
           LinkedList<T>::head=nullptr;
           LinkedList<T>::tail=nullptr;
           return returningValue;
       }
       else{
            //Store the LinkedList<T>::tail Node<T> value in variable
            T returningValue=LinkedList<T>::tail->data;
            //Create the temp pointer to Store the LinkedList<T>::tail memory
            Node<T>* temp=LinkedList<T>::tail;
            //Move the LinkedList<T>::tail Node<T> pointer to one step back of LinkedList<T>::tail Node<T> pointer by using previous
            LinkedList<T>::tail=LinkedList<T>::tail->previous;
            //Store the nullptr in the next pointer of the LinkedList<T>::tail 
            LinkedList<T>::tail->next=nullptr;
            //Delete the LinkedList<T>::tail pointer memory
            delete temp;
            return returningValue;
       }
        
   }
 
template <typename T>
void myLinkedList<T>::insertAtTail(T value){
    //Create the new Node<T> which will be insert in LinkedList
    Node<T>* newNode=new Node<T>;
    //Store the value on that new Node<T> 
    newNode->data=value;
    //Store the nullptr on next Node<T> pointer of that new Node<T> 
    newNode->next=nullptr;
    //For the insertion of Node<T> in empty LinkedList
    if(LinkedList<T>::head==nullptr&&LinkedList<T>::tail==nullptr){
        //Both LinkedList<T>::head and LinkedList<T>::tail will start pointing to the new Node<T>
        LinkedList<T>::head=newNode;
        LinkedList<T>::tail=newNode;
    }//For the rest of Node<T>'s
    else{
        //Store new Node<T> memory on LinkedList<T>::tail next pointer 
        LinkedList<T>::tail->next=newNode;
        //Store LinkedList<T>::tail memory on the new Node<T> previous pointer 
        newNode->previous=LinkedList<T>::tail;
        //Move the LinkedList<T>::tail pointer to the new Node<T>
        LinkedList<T>::tail=newNode;
    }
}
template <typename T>
myLinkedList<T>::myLinkedList():LinkedList<T>(){
    
}