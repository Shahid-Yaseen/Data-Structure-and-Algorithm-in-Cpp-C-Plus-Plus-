#pragma once
#include"LinkedList.h"

class myLinkedList: public LinkedList{
  public:
  //Default Constructor
   myLinkedList();
   //Abstract Class functions over-ridding
   void insertAtTail(Node);
   void insertAtHead(Node);
   Node deleteFromHead();
   Node deleteFromTail();
   bool search(Node);
   void display();
   bool deleteValue(Node);
   myLinkedList(myLinkedList&);
   myLinkedList operator=(myLinkedList& );
   Node deleteByID(int );
   void sortByID();
   void sortByName();
   void sortByIDDesc();
   void sortByNameDesc();
};
void myLinkedList::sortByIDDesc(){
     Node* temp=head;
    while(temp->next!=nullptr){
        if(temp->id<temp->next->id){
            string n;
            int temp_id;
            temp_id=temp->id;
            n=temp->name;
           temp->id=temp->next->id;
           temp->name=temp->next->name;
           temp->next->id=temp_id;
           temp->next->name=n;
           temp=head;
            continue;
        }
        temp=temp->next;
    }
}

void myLinkedList::sortByNameDesc(){
     Node* temp=head;
     
    while(temp->next!=nullptr){
        if(temp->name<temp->next->name){
             string n;
            int temp_id;
            temp_id=temp->id;
            n=temp->name;
           temp->id=temp->next->id;
           temp->name=temp->next->name;
           temp->next->id=temp_id;
           temp->next->name=n;
           temp=head;
            continue;
        }
        temp=temp->next;
    }
}

void myLinkedList::sortByID(){
     Node* temp=head;
    while(temp->next!=nullptr){
        if(temp->id>temp->next->id){
            string n;
            int temp_id;
            temp_id=temp->id;
            n=temp->name;
           temp->id=temp->next->id;
           temp->name=temp->next->name;
           temp->next->id=temp_id;
           temp->next->name=n;
           temp=head;
            continue;
        }
        temp=temp->next;
    }
}

void myLinkedList::sortByName(){
     Node* temp=head;
     
    while(temp->next!=nullptr){
        if(temp->name>temp->next->name){
             string n;
            int temp_id;
            temp_id=temp->id;
            n=temp->name;
           temp->id=temp->next->id;
           temp->name=temp->next->name;
           temp->next->id=temp_id;
           temp->next->name=n;
           temp=head;
            continue;
        }
        temp=temp->next;
    }
}

Node myLinkedList::deleteByID(int givenID){
    Node* temp=head;
    while(temp!=nullptr){
        if(givenID==temp->id){
            Node tempData;
            tempData.id=temp->id;
            tempData.name=temp->name;
            deleteValue(*temp);
            return tempData;
        }
        temp=temp->next;
    }
}

bool myLinkedList::deleteValue(Node value)
{
	if (head == nullptr)
	{
		cout << "LL is empty" << endl;
		return false;
	}
	else if (head->next == nullptr) //single Node<T> case
	{
		if (value.id ==head->id&& value.name==head->name)
		{
			delete head;
		    head = nullptr;
			return true;
		}

		else
			return false;
	}

	else
	{
		if (value.id ==head->id && value.name==head->name) //head Node<T>::data deletion
		{
			deleteFromHead();
			return true;
		}

		else //in between deletion && delete tail
		{
			Node* t1 = head;
			while (1)
			{
				if (value.id ==t1->next->id && value.name==t1->next->name)
					break;

				else
					t1 = t1->next;

				if (t1->next == nullptr) //t1->next == nullptr
					return false;
			}
            
			Node* t2 = t1->next;
			t1->next = t1->next->next;
			delete t2;
			t2 = nullptr;
			return true;
		}
	}
}
myLinkedList myLinkedList::operator=(myLinkedList& obj){
    myLinkedList mll;
    Node* temp=obj.head;
    while(temp!=nullptr){
        mll.insertAtTail(*temp);
        temp=temp->next;
    }
    return mll;
}
myLinkedList::myLinkedList(myLinkedList& obj){
   Node* temp=obj.head;
    while(temp!=nullptr){
        this->insertAtTail(*temp);
        temp=temp->next;
    }
}


void myLinkedList::display(){
    //Create temp Node which will start pointing to the head
    Node* temp=head;
    //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //Display the Node value
        temp->display();
        //Move the pointer to the next Node by using next Node pointer
        temp=temp->next;
    }
}

bool myLinkedList::search(Node value){
    //Create temp Node which will start pointing to the head
    Node* temp=head;
     //execut the loop until the nullptr means the last Node comes
    while(temp!=nullptr){
        //If the value is found on any Node return True and function will terminate
       if(value.id ==temp->id&& value.name==temp->name)
          return true;
        //If the value is not found Move the pointer to the next Node by using next Node pointer
        temp=temp->next;
    }
    //False will be returned if the function is not terminate above which means value not found
    return false;
}

void myLinkedList::insertAtHead(Node value){
    //Create the new Node which will be insert in LinkedList
    Node* newNode=new Node;
    //Store the value on that new Node 
    newNode->id=value.id;
    newNode->name=value.name;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //For the insertion of Node in empty LinkedList
    if(head==nullptr){
        //the head will start pointing to the new Node
        head=newNode;
    }//For the rest of Node's
    else{
        //New Node next pointer will start pointing to the next
        newNode->next=head;
        //New Node will become the head of LinkedList
        head=newNode;
    }
}
Node myLinkedList::deleteFromHead(){
       //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
       if(head==nullptr){
           Node t;
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return t;
       }
       //For the single Node in LinkedList
       else if(head->next==nullptr){
           //Store the head Node value in variable
           Node* returningValue=head;
           //delete the head Node
           delete head;
           //head  again store nullptr which will show emptyness of LinkedList
           head=nullptr;
           return *returningValue;
       }
       else{
            //Store the head Node value in variable
           Node* returningValue=head;
           //Store the head pointer memory in temp pointer
           Node* temp=head;
           //Move the head to its next Node
           head=head->next;
           //delete the temp pointer memory
           delete temp;
           //store the nullptr in temp pointer
           temp=nullptr;
           return *returningValue;
       }
      
}

Node myLinkedList::deleteFromTail(){
        //First of All check even the Node is present in LinkedList or not. If LinkedList is empty terminate the function by returning NULL
        if(head==nullptr){
            Node t;
           std::cout<<" LINKEDLIST IS EMPTY !"<<std::endl;
           return t;
       }
        //For the single Node in LinkedList
       else if(head->next==nullptr){
           //Store the head Node value in variable, hence head and tail pointing to the same memory
           Node* returningValue=head;
           //delete the head Node
           delete head;
           //head again store nullptr which will emptyness of LinkedList
           head=nullptr;
         
           return *returningValue;
       }
       else{
            //Create temp Node which will start pointing to the head
            Node* temp=head;
            //execut the loop until the tail pointer comes
            while(temp->next->next!=nullptr){
                temp=temp->next;
            }
            //Store the tail Node value in variable
            Node* returningValue=temp->next;
            //Delete the tail pointer memory
            delete temp->next;
            //Store the nullptr in the next pointer of the tail 
            temp->next=nullptr;
            return *returningValue;
       }
        
   }

void myLinkedList::insertAtTail(Node value){
    //Create the new Node which will be insert in LinkedList
    Node* newNode=new Node;
    //Store the value on that new Node 
    newNode->id=value.id;
    newNode->name=value.name;
    //Store the nullptr on next Node pointer of that new Node 
    newNode->next=nullptr;
    //For the insertion of Node in empty LinkedList
    if(head==nullptr){
        //Both head will start pointing to the new Node
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
       
    }
}

myLinkedList::myLinkedList():LinkedList(){
    
}