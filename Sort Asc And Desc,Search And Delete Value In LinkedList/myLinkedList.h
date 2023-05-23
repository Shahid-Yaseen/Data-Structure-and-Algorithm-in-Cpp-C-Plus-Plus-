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
   void sortAsc();
   void sortDesc();
   bool deleteValue(int );
};

void myLinkedList::sortAsc(){
     Node* temp=tail;
    while(temp->prev!=nullptr){
        if(temp->data<temp->prev->data){
           int d=temp->data;
           
            temp->data=temp->prev->data;
            temp->prev->data=d;
            temp=tail;
            continue;
        }
        temp=temp->prev;
    }
}
void myLinkedList::sortDesc(){
     Node* temp=tail;
    while(temp->prev!=nullptr){
        if(temp->data>temp->prev->data){
           int d=temp->data;
            temp->data=temp->prev->data;
            temp->prev->data=d;
            temp=tail;
            continue;
        }
        temp=temp->prev;
    }
}
bool myLinkedList::deleteValue(int value)
{
	if (tail == nullptr)
	{
		std::cout << "LL is empty" << std::endl;
		return false;
	}

	else if (tail->prev== nullptr) //single Node<T> case
	{
		if (value == tail->data)
		{
			delete tail;
			tail = nullptr;
			return true;
		}

		else
			return false;
	}

	else
	{
		if (value == tail->data) //tail Node<T>::data deletion
		{
			deleteFromTail();
			return true;
		}

		else //in between deletion && delete tail
		{
			Node* t1 =tail;
			while (1)
			{
				if (value == t1->prev->data)
					break;

				else
					t1 = t1->prev;

				if (t1->prev == nullptr) //t1->next == nullptr
					return false;
			}

			Node* t2 = t1->prev;
			t1->prev = t1->prev->prev;
			delete t2;
			t2 = nullptr;
			return true;
		}
	}
}
void myLinkedList::display(){
    //Create temp Node which will start pointing to the head
    Node* temp=tail;
    //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //Display the Node value
        std::cout<<temp->data<<std::endl;
        //Move the pointer to the next Node by using next Node pointer
        temp=temp->prev;
    }
    
}

bool myLinkedList::search(int value){
    //Create temp Node which will start pointing to the head
    Node* temp=tail;
     //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //If the value is found on any Node return True and function will terminate
       if(temp->data==value)
          return true;
        //If the value is not found Move the pointer to the next Node by using next Node pointer
        temp=temp->prev;
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
    newNode->prev=nullptr;
    //For the insertion of Node in empty LinkedList
    if(tail==nullptr){
        //the head will start pointing to the new Node
        tail=newNode;
    }//For the rest of Node's
    else{
          Node* head=tail;
           while(head->prev!=nullptr){
               head=head->prev;
           }
           head->prev=newNode;
    }
}

int myLinkedList::deleteFromHead(){
       //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
       if(tail==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
       //For the single Node in LinkedList
       else if(tail->prev==nullptr){
          
           int returningValue=tail->data;
           delete tail;
           tail=nullptr;
           return returningValue;
       }
       else{
           Node* head=tail;
           while(head->prev->prev!=nullptr){
               head=head->prev;
           }
            //Store the head Node value in variable
           int returningValue=head->prev->data;
           //Store the head pointer memory in temp pointer
           Node* temp=head->prev;
           delete temp;
           head->prev=nullptr;
           
           temp=nullptr;
           return returningValue;
       }
      
       return 0;
}

int myLinkedList::deleteFromTail(){
        //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
        if(tail==nullptr){
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return NULL;
       }
        //For the single Node in LinkedList
       else if(tail->prev==nullptr){
           //Store the head Node value in variable, hence head and tail pointing to the same memory
           int returningValue=tail->data;
           //delete the head Node
           delete tail;
           //head again store nullptr which will emptyness of LinkedList
          tail=nullptr;
         
           return returningValue;
       }
       else{
            
          
            //Store the tail Node value in variable
            int returningValue=tail->data;
            //Delete the tail pointer memory
            Node* temp=tail;
            tail=tail->prev;
            delete temp;
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
    newNode->prev=nullptr;
    //For the insertion of Node in empty LinkedList
    if(tail==nullptr){
       
        tail=newNode;
      
    }//For the rest of Node's
    else{
         newNode->prev=tail;
         tail=newNode;
       
    }
}

myLinkedList::myLinkedList():LinkedList(){
    
}