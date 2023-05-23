#pragma once
#include "LinkedList.h"
template <typename T>
class myLinkedList :public LinkedList<T>
{
public:
	void insertAtTail(T);	
	void insertAtHead(T); 
	void display();
	T deleteFromTail();
	T deleteFromHead();
	bool isEmpty();
	bool deleteValue(T);
	bool searchValue(T);
	void insertSorted(T);
	void deleteDuplicate();
	int displayCount();
};


template <typename T>
bool myLinkedList<T>::isEmpty()
{
	if (myLinkedList<T>::head == nullptr)
		return true;

	return false;
}
template <typename T>
T myLinkedList<T>::deleteFromHead()
{
	if (myLinkedList<T>::head == nullptr)
	{
		cout << "LL is empty" << endl;
		return NULL;
	}

	else if (myLinkedList<T>::head->next == nullptr) //single Node<T>::Node<T> case
	{
		T RV = myLinkedList<T>::head->Node<T>::data;
		delete myLinkedList<T>::head;
		myLinkedList<T>::head = nullptr;
		return RV;
	}

	else
	{
		T RV = myLinkedList<T>::head->Node<T>::data;
		Node<T>* temp = myLinkedList<T>::head;
		myLinkedList<T>::head = myLinkedList<T>::head->next;
		delete temp;
		temp = nullptr;
		return RV;
	}
}

template <typename T>
void myLinkedList<T>::insertAtHead(T value)
{
	Node<T>* newNode;	//this is a WILD poTer
	newNode = new Node<T>;
	newNode->Node<T>::data = value;
	newNode->next = nullptr;

	if (myLinkedList<T>::head == nullptr) //first Node<T> to insert
	{
		myLinkedList<T>::head = newNode;		// poTer = memory
	}

	else //rest of the NODES
	{
		newNode->next = myLinkedList<T>::head;
		myLinkedList<T>::head = newNode;
	}
}
template <typename T>
void myLinkedList<T>::display()
{
	Node<T>* temp = myLinkedList<T>::head;

	while (1)
	{
		if (temp == nullptr)
			break;

		cout << temp->Node<T>::data << endl;
		temp = temp->next;
	}
	

}
template <typename T>
int myLinkedList<T>::displayCount()
{
    int count=0;
	Node<T>* temp = myLinkedList<T>::head;

	while (1)
	{
		if (temp == nullptr)
			break;
        
        count++;
		
		temp = temp->next;
	}
	return count;
	

}
template <typename T>
void myLinkedList<T>::insertAtTail(T value)
{
	Node<T>* newNode;	//this is a WILD poTer
	newNode = new Node<T>;
	newNode->Node<T>::data = value;
	newNode->next = nullptr;

	if (myLinkedList::head == nullptr) //first Node<T> to insert
	{
		myLinkedList<T>::head = newNode;		// poTer = memory
	}

	else //rest of the NODES
	{
		Node<T>* t = myLinkedList::head;
		while (1)
		{
			if (t->next == nullptr)
				break;

			t = t->next;
		}
		
		t->next = newNode;
	}
}
template <typename T>
T myLinkedList<T>::deleteFromTail()
{
	if (myLinkedList<T>::head == nullptr)
	{
		cout << "LL is empty" << endl;
		return NULL;
	}

	else if (myLinkedList<T>::head->next == nullptr) //single Node<T> case
	{
		T RV = myLinkedList<T>::head->Node<T>::data;
		delete myLinkedList<T>::head;
		myLinkedList<T>::head = nullptr;
		return RV;
	}

	else
	{
		Node<T>* temp = myLinkedList<T>::head;

		while (1)
		{
			if (temp->next->next == nullptr)
				break;

			temp = temp->next;
		}

		T returningValue = temp->next->Node<T>::data;
		delete temp->next;
		temp->next = nullptr;
		return returningValue;
	}
}


template <typename T>
void myLinkedList<T>::insertSorted(T value)
{
	if (myLinkedList::head == nullptr) //first Node<T> to insert
	{
		Node<T>* newNode;	//this is a WILD poTer
		newNode = new Node<T>;
		newNode->Node<T>::data = value;
		newNode->next = nullptr;
		myLinkedList::head = newNode;		// poTer = memory
	}

	else if (value <= myLinkedList::head->Node<T>::data) //smallest value
		insertAtHead(value);

	else //in between value and ending value
	{
		Node<T>* newNode;	//this is a WILD poTer
		newNode = new Node<T>;
		newNode->Node<T>::data = value;
		newNode->next = nullptr;

		Node<T>* t1 = myLinkedList<T>::head;
		while (1)
		{
		    	if (t1->next == nullptr) //largest value insertion
			{
				t1->next = newNode;
				break;
			}
			if (value > t1->Node<T>::data && value <= t1->next->Node<T>::data)
			{
				newNode->next = t1->next;
				t1->next = newNode;
				break;
			}

			else
				t1 = t1->next;

		
		}
	}
}

template <typename T>
bool myLinkedList<T>::deleteValue(T value)
{
	if (myLinkedList<T>::head == nullptr)
	{
		cout << "LL is empty" << endl;
		return false;
	}

	else if (myLinkedList<T>::head->next == nullptr) //single Node<T> case
	{
		if (value == myLinkedList<T>::head->Node<T>::data)
		{
			delete myLinkedList<T>::head;
			myLinkedList<T>::head = nullptr;
			return true;
		}

		else
			return false;
	}

	else
	{
		if (value == myLinkedList<T>::head->Node<T>::data) //head Node<T>::data deletion
		{
			deleteFromHead();
			return true;
		}

		else //in between deletion && delete tail
		{
			Node<T>* t1 = myLinkedList<T>::head;
			while (1)
			{
				if (value == t1->next->Node<T>::data)
					break;

				else
					t1 = t1->next;

				if (t1->next == nullptr) //t1->next == nullptr
					return false;
			}

			Node<T>* t2 = t1->next;
			t1->next = t1->next->next;
			delete t2;
			t2 = nullptr;
			return true;
		}
	}
}
template <typename T>
bool myLinkedList<T>::searchValue(T value)
{
	if (myLinkedList<T>::head == nullptr)
	{
		cout << "LL is empty" << endl;
		return false;
	}

	else if (myLinkedList<T>::head->next == nullptr) //single Node<T> case
	{
		if (value == myLinkedList<T>::head->Node<T>::data)
		{
			return true;
		}
		else
			return false;
	}

	else
	{
		if (value == myLinkedList<T>::head->Node<T>::data) //head Node<T>::data deletion
		{
		
			return true;
		}

		else //in between deletion && delete tail
		{
			Node<T>* t1 = myLinkedList<T>::head;
			while (1)
			{
				if (value == t1->next->Node<T>::data)
					break;

				else
					t1 = t1->next;

				if (t1->next == nullptr) //t1->next == nullptr
					return false;
			}
     	return true;
		}
	}
}
template <typename T>
void myLinkedList<T>::deleteDuplicate(){
    Node<T>* temp = myLinkedList<T>::head;
    bool forward=true;
	while (1)
	{
		if (temp->next == nullptr)
			break;

	    	Node<T>* temp2 = temp->next;

    	    while (1)
    	    {
    	    	if (temp2 == nullptr)
    	    		break;
    	    		
    	    	if(temp->data==temp2->data){
    	    	    temp=temp->next;
    	    	    deleteValue(temp2->data);
    	    	    forward=false;
    	    	    break;
    	    	}
    	    	temp2 = temp2->next;
    	    }   
    	 if(forward)   
        	temp = temp->next;
         forward=true;
	}
}

