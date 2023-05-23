#pragma once
#include "LinkedList.h"

class myLinkedList :public LinkedList
{
public:
	void insertAtTail(int);	
	void insertAtHead(int); 
	void display();
	int deleteFromTail();
	int deleteFromHead();
	bool isEmpty();
	bool deleteValue(int);
	bool searchValue(int);
	void insertSorted(int);
};
bool myLinkedList::isEmpty()
{
	if (head == nullptr)
		return true;

	return false;
}

int myLinkedList::deleteFromHead()
{
	if (head == nullptr)
	{
		cout << "LL is empty" << endl;
		return NULL;
	}

	else if (head->next == nullptr) //single node case
	{
		int RV = head->data;
		delete head;
		head = nullptr;
		return RV;
	}

	else
	{
		int RV = head->data;
		Node* temp = head;
		head = head->next;
		delete temp;
		temp = nullptr;
		return RV;
	}
}


void myLinkedList::insertAtHead(int value)
{
	Node* newNode;	//this is a WILD pointer
	newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr) //first NODE to insert
	{
		head = newNode;		// pointer = memory
	}

	else //rest of the NODES
	{
		newNode->next = head;
		head = newNode;
	}
}

void myLinkedList::display()
{
	Node* temp = head;

	while (1)
	{
		if (temp == nullptr)
			break;

		cout << temp->data << endl;
		temp = temp->next;
	}
	

}


void myLinkedList::insertAtTail(int value)
{
	Node* newNode;	//this is a WILD pointer
	newNode = new Node;
	newNode->data = value;
	newNode->next = nullptr;

	if (head == nullptr) //first NODE to insert
	{
		head = newNode;		// pointer = memory
	}

	else //rest of the NODES
	{
		Node* t = head;
		while (1)
		{
			if (t->next == nullptr)
				break;

			t = t->next;
		}
		
		t->next = newNode;
	}
}

int myLinkedList::deleteFromTail()
{
	if (head == nullptr)
	{
		cout << "LL is empty" << endl;
		return NULL;
	}

	else if (head->next == nullptr) //single node case
	{
		int RV = head->data;
		delete head;
		head = nullptr;
		return RV;
	}

	else
	{
		Node* temp = head;

		while (1)
		{
			if (temp->next->next == nullptr)
				break;

			temp = temp->next;
		}

		int returningValue = temp->next->data;
		delete temp->next;
		temp->next = nullptr;
		return returningValue;
	}
}



void myLinkedList::insertSorted(int value)
{
	if (head == nullptr) //first NODE to insert
	{
		Node* newNode;	//this is a WILD pointer
		newNode = new Node;
		newNode->data = value;
		newNode->next = nullptr;
		head = newNode;		// pointer = memory
	}

	else if (value <= head->data) //smallest value
		insertAtHead(value);

	else //in between value and ending value
	{
		Node* newNode;	//this is a WILD pointer
		newNode = new Node;
		newNode->data = value;
		newNode->next = nullptr;

		Node* t1 = head;
		while (1)
		{
		    	if (t1->next == nullptr) //largest value insertion
			{
				t1->next = newNode;
				break;
			}
			if (value > t1->data && value <= t1->next->data)
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


bool myLinkedList::deleteValue(int value)
{
	if (head == nullptr)
	{
		cout << "LL is empty" << endl;
		return false;
	}

	else if (head->next == nullptr) //single node case
	{
		if (value == head->data)
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
		if (value == head->data) //head data deletion
		{
			deleteFromHead();
			return true;
		}

		else //in between deletion && delete tail
		{
			Node* t1 = head;
			while (1)
			{
				if (value == t1->next->data)
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
bool myLinkedList::searchValue(int value)
{
	if (head == nullptr)
	{
		cout << "LL is empty" << endl;
		return false;
	}

	else if (head->next == nullptr) //single node case
	{
		if (value == head->data)
		{
			return true;
		}
		else
			return false;
	}

	else
	{
		if (value == head->data) //head data deletion
		{
		
			return true;
		}

		else //in between deletion && delete tail
		{
			Node* t1 = head;
			while (1)
			{
				if (value == t1->next->data)
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