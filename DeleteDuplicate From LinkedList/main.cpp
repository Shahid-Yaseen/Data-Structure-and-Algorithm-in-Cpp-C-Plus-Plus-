
#include <iostream>
#include"myLinkedList.h"
using namespace std;

int main()
{
   char option;
   int num;
   myLinkedList<int> mll;
   while(1){
       cout<<"1. Add a value to the linked list"<<endl<<
            "2. Delete duplicate values from the linked list"<<endl<<
            "3. Display the linked list"<<endl<<
            "4. Exit"<<endl;
            cin>>option;
            if(option=='1'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                mll.insertAtTail(num);
            }
            else if(option=='2'){
              mll.deleteDuplicate();
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
