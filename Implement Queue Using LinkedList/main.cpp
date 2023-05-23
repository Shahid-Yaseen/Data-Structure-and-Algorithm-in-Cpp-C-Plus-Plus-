
#include <iostream>
#include"myQueue.h"
using namespace std;

int main()
{
   char option;
   int num;
   myQueue<int> mq;
   while(1){
       cout<<"1. Enqueue an element to the queue"<<endl<<
            "2. Dequeue an element from the queue"<<endl<<
            "3. Get the front element of the queue"<<endl<<
            "4. Check if the queue is empty"<<endl<<
            "5. Display the queue"<<endl<<
            "6. Exit"<<endl;
            cin>>option;
            if(option=='1'){
                cout<<"Enter the Number : "<<endl;
                cin>>num;
                mq.enqueue(num);
            }
            else if(option=='2'){
                
               cout<<"Dequeue element is : "<<mq.dequeue()<<endl;
            }
            else if(option=='3'){
                cout<<"Front element of Queue is : "<<mq.front()<<endl;
            }
            else if(option=='4'){
                if(mq.isEmpty())
                cout<<"Queue is Empty "<<endl;
                else
                cout<<"Queue is not empty"<<endl;
                
            }
            else if(option=='5'){
                mq.display();
               
            }
            else if(option=='6'){
                break;
            }
            else{
                cout<<"Wrong input"<<endl;
            }
   }
   
}
