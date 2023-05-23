#pragma once
#include"LinkedList.h"
class MyLinkedList:public LinkedList{

 public:
 MyLinkedList();
 void insertAtHead(int);
 void insertAtTail(int);
 void display();
 int findMaximum();
 int findSecondMaximum();
 int findSum();
 void findFac();
 void deleteEvenNodes();
 void sort();
};
void MyLinkedList::sort(){
   if (head != nullptr)
	{
	   
		Node* temp = head;
		while (temp->next != head)
		{
	        if(temp->data>temp->next->data){
	            int data=temp->data;
	            temp->data=temp->next->data;
	            temp->next->data=data;
	            temp=head;
	            continue;
	        }
			temp = temp->next;
		}
		
	}
    
    
}
void MyLinkedList::deleteEvenNodes(){
   
    if (head != nullptr)
	{
		Node* temp = head;
		while (1)
		{
		    if(temp->data%2==0){
		        Node* t=temp;
		        temp->next->prev=t->prev;
		        t->prev->next=temp->next;
		        temp = temp->next;
		        if(t==head){
		            head=temp;
		        }
		        delete t;
		        continue;
		    }
			temp = temp->next;
			if (temp == head)
				break;
		}
		
	}
}
int MyLinkedList::findSum(){
    if (head != nullptr)
	{
	    int sum=0;
		Node* temp = head;
		while (1)
		{
	    	sum=sum+temp->data;
			temp = temp->next;
			if (temp == head)
				break;
		}
		return sum;
	}
}
void MyLinkedList::findFac(){
    
    if (head != nullptr)
	{
		Node* temp = head;
		int fac;
		while (1)
		{   fac=1;
		    if(temp->data>=0){
		    for(int i=temp->data;i>1;i--){
		      
		        fac*=i;
		    }
		    std::cout <<"The Factorial of "<< temp->data<<" is " <<fac<< std::endl;}
		    else{
		         std::cout <<"The Factorial of "<< temp->data<<"does not exist " << std::endl;
		    }
			temp = temp->next;
			if (temp == head)
				break;
		}
	}
}
MyLinkedList::MyLinkedList():LinkedList(){
    
}
int MyLinkedList::findSecondMaximum(){
     if (head != nullptr)
	{
	    int max=findMaximum();
	    int secMax=0;
		Node* temp = head;
		while (1)
		{
		if(temp->data>secMax&&temp->data<max){
		    secMax=temp->data;
		}
			temp = temp->next;
			if (temp == head)
				break;
		}
		return secMax;
	}
}
int MyLinkedList::findMaximum(){
    if (head != nullptr)
	{
	    int max=0;
		Node* temp = head;
		while (1)
		{
		if(temp->data>max){
		    max=temp->data;
		}
			temp = temp->next;
			if (temp == head)
				break;
		}
		return max;
	}
	
}
void MyLinkedList::insertAtHead(int value){
   Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	nn->prev = nullptr;

	if (head == nullptr)
	{
		nn->next = nn;
		nn->prev = nn;
		head = nn;
	}

	else
	{
		nn->next = head;
		nn->prev = head->prev;
		head->prev->next = nn;
		head->prev = nn;
		head=nn;
	}
}
 void MyLinkedList::insertAtTail(int value){
    Node* nn = new Node;
	nn->data = value;
	nn->next = nullptr;
	nn->prev = nullptr;

	if (head == nullptr)
	{
		nn->next = nn;
		nn->prev = nn;
		head = nn;
	}

	else
	{
		nn->next = head;
		nn->prev = head->prev;
		head->prev->next = nn;
		head->prev = nn;
	} 
 }
 void MyLinkedList::display(){
     
	if (head != nullptr)
	{
		Node* temp = head;
		while (1)
		{
			std::cout << temp->data << std::endl;
			temp = temp->next;
			if (temp == head)
				break;
		}
	}
 }