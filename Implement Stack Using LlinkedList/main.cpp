#include <iostream>
#include"myStack.h"
using namespace std;

int main()
{
   char option;
   int num;
   myStack<int> ms;
   while(1){
       cout<<"1. Push element onto the stack"<<endl<<
            "2. Pop element from the stack"<<endl<<
            "3. Display the top element of the stack"<<endl<<
            "4. Display the stack"<<endl<<
            "5. Check if the stack is empty"<<endl<<
            "6. Exit"<<endl;
            cin>>option;
            if(option=='1'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                ms.push(num);
            }
            else if(option=='2'){
                
               cout<<"Pop element is : "<<ms.pop()<<endl;
            }
            else if(option=='3'){
                cout<<"Top element of stack is : "<<ms.top()<<endl;
            }
            else if(option=='4'){
               ms.display();
                
            }
            else if(option=='5'){
                if(ms.isEmpty())
                cout<<"stack is Empty "<<endl;
                else
                cout<<"stack is not empty"<<endl;
            }
            else if(option=='6'){
                break;
            }
            else{
                cout<<"Wrong input"<<endl;
            }
   }
   
}
