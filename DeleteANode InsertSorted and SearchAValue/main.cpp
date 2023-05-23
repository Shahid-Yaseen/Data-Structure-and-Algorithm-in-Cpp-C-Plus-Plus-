#include"myLinkedList.h"
#include <iostream>
using namespace std;
int main()
{
   char option;
   int num;
   myLinkedList mll;
   while(1){
       cout<<"1. Add node to the linked list"<<endl<<
            "2. Insert node in sorted order"<<endl<<
            "3. Delete a node from the linked list"<<endl<<
            "4. Search for a node in the linked list"<<endl<<
            "5. Display the linked list"<<endl<<
            "6. Exit"<<endl;
            cin>>option;
            if(option=='1'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                mll.insertAtHead(num);
            }
            else if(option=='2'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                mll.insertSorted(num);
            }
            else if(option=='3'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                mll.deleteValue(num);
            }
            else if(option=='4'){
                 cout<<"Enter the Number : "<<endl;
                cin>>num;
                if(mll.searchValue(num))
                cout<<"Value Found "<<endl;
                else{
                    cout<<"Value not found"<<endl;
                }
                
            }
            else if(option=='5'){
                mll.display();
            }
            else if(option=='6'){
                break;
            }
            else{
                cout<<"Wrong input"<<endl;
            }
   }
   
}
