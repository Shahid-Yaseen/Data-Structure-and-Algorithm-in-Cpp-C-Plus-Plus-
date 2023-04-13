#include"myStack.h"
int main(){
    
    //Create two stack one is orignal and second is copy in which values push in reverse order
    myStack ms(100),copyMs(100);
    char arr[100],temp;
    std::cout<<"ENTER THE FULLY PARENTHESIZED INFIX EXPRESSION "<<std::endl;
    cin.getline(arr,100);

    //Execute Loop Until The Entered Character Array Reaches to Null Character
    for(int i=0;arr[i]!='\0';i++){
        
        //Pushing Values to stack
        if(arr[i]=='('||(arr[i]>='0'&&arr[i]<='9'||(arr[i]=='-'||arr[i]=='/'||arr[i]=='*'||arr[i]=='+'))){
            ms.push(arr[i]);
        }
        
        if(arr[i]==')'){
            while(1){
                //Pushing values Into Copy stack In Reverse Order
                copyMs.push(ms.pop());
                if(ms.top()=='('){
                    ms.pop();
                    break;
                }
             }
             //Poping Values From Copy stack
           while(!(copyMs.isEmpty())){
               if(copyMs.top()=='-'||copyMs.top()=='/'||copyMs.top()=='*'||copyMs.top()=='+'){
                   temp=copyMs.pop();
                   if(!copyMs.isEmpty())
                     std::cout<<" ";
               }
               else
                   std::cout<<copyMs.pop();
           }
           std::cout<<" "<<temp<<" ";
        }
    }
}