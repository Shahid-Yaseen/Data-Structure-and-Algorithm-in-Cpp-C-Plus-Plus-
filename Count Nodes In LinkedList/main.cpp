
#include <iostream>
#include"myLinkedList.h"
using namespace std;

int main()
{
   char option;
   int num;
   myLinkedList<int> mll;
   while(1){
       cout<<"1. Add node to the linked list"<<endl<<
            "2. Count the number of nodes in the linked list"<<endl<<
            "3. Display the linked list"<<endl<<
            "4. Exit"<<endl;
            cin>>option;
            if(option=='1'){
                cout<<"Enter the Data : "<<endl;
                cin>>num;
                mll.insertAtTail(num);
            }
            else if(option=='2'){
              cout<<"Total nodes in linkedList are : "<<mll.displayCount()<<endl;
            }
            else if(option=='3'){
               mll.display();
            }
           
            else if(option=='4'){
                break;
            }
            else{
                cout<<"Wrong input"<<endl;
            }
   }
   
}
