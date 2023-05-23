#include"myLinkedList.h"
int main()
{
    myLinkedList mll,mll2;
    mll.insertAtHead(10);
    mll.insertAtHead(66);
    mll.insertAtHead(98);
    mll.insertAtHead(100);
    mll.insertAtHead(88);
    mll.insertAtTail(99);
    mll.insertAtTail(-23);
    mll.insertAtTail(-958);
    mll.insertAtTail(-774);
    //Check Whether the LinkedList is Palindrome or Not
    if(mll.isPalindrome()){
        std::cout<<"First LinkedList is Palindrome "<<std::endl;
    }else{
        std::cout<<"First LinkedList is Not Palindrome "<<std::endl;
    }
    mll2.insertAtTail(1);
    mll2.insertAtTail(2);
    mll2.insertAtTail(3);
    mll2.insertAtTail(2);
    mll2.insertAtTail(1);
    //Check Whether the LinkedList is Palindrome or Not
    if(mll2.isPalindrome()){
        std::cout<<"Second LinkedList is Palindrome "<<std::endl;
    }else{
        std::cout<<"Second LinkedList is Not Palindrome "<<std::endl;
    }
    
  
   
   
}
