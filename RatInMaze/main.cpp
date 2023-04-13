#include"myStack.h"
#include<fstream>
using namespace std;
int main(){
    //Creating temp character array to count size of matrix
    char temp[100]; 
    //Creating stack for backtracking
    myStack stack(81);
    
    ifstream fin;
    ofstream fout;
    
    //Initilizing row and column and size with zero
   int row=0,col=0;
   int size=0;
   
   //Count the size of Matrix
   fin.open("input.txt");
   if(!fin.is_open()){
     std::cout<<"FILE NOT FOUND"<<std::endl;
    }
    else{
      while(!fin.eof()){
            fin.getline(temp,99);
            size++;
        }
    }
    fin.close();
    
    //Creating dynamic 2-D Array
    int** arr=new int*[size];
    for(int i=0;i<size;i++){
        arr[i]=new int[size];
    }
    //Solution Matrix will be final path of Maze 
    int** sol=new int*[size];
    for(int i=0;i<size;i++){
        sol[i]=new int[size];
    }
    
    //Reading Data From input.txt file into 2-D arr
    fin.open("input.txt");
    for(int l=0;l<size;l++){
       for(int k=0;k<size;k++){
           fin>>arr[l][k];
       }
   }
   fin.close();
    
    //Checking Initial Block
   if(arr[row][col]==1){
       sol[row][col]=1;
     //Loop will Execute until row & col is between 0 and size
     while(row>=0&&col>=0&&row<size&&col<size){
         
       //check Whether the Rat Reached The final Block Or Not
       if(row==size-1&&col==size-1){
           //Writting output to output.txt file
           fout.open("output.txt");
          fout<<"REACHED TO THE DESTINATION "<<endl;
          for(int l=0;l<size;l++){
             for(int k=0;k<size;k++){
                 fout<<sol[l][k]<<" ";
                  }
                 fout<<endl;
           }
           fout.close();
          break;
        }
        
        //Check the Right Side Block of Maze
       if(col+1<size&&arr[row][col+1]==1&&sol[row][col+1]!=1){
           stack.push('R');
           sol[row][col+1]=1;
           col++;
       }
       
       //Check the Down side Block of Maze
       else if(row+1<size&&arr[row+1][col]==1&&sol[row+1][col]!=1){
           sol[row+1][col]=1;
           stack.push('D');
           row++;
       }
       
       //Check the UP side Block of Maze
       else if(row-1>=0&&arr[row-1][col]==1&&sol[row-1][col]!=1){
           sol[row-1][col]=1;
           stack.push('U');
           row--;
       }
       
       //Check the Left side Block of Maze
        else if(col-1>=0&&arr[row][col-1]==1&&sol[row][col-1]!=1){
           sol[row][col-1]=1;
           stack.push('L');
           col--;
       }
       //If Rat Does not move in Any Direction Then We Will Start backtracking using Stack
       //Check Whether the last move of Rat was Right
       else if(stack.top()=='R'){
          arr[row][col]=-1;
          sol[row][col]=0;
          stack.pop();
          col--;
       }
       //Check Whether the last move of Rat was Up
       else if(stack.top()=='U'){
        arr[row][col]=-1;
        sol[row][col]=0;
        stack.pop();
        row++;
       }
       //Check Whether the last move of Rat was Down
        else if(stack.top()=='D'){
         arr[row][col]=-1;
         stack.pop();
         sol[row][col]=0;
         row--;
       }
       //Check Whether the last move of Rat was Left
       else if(stack.top()=='L'){
           arr[row][col]=-1;
           stack.pop();
           sol[row][col]=0;
           col++;
       }
       //If None Of above conditions run then it means then it Mean Rat can't move in any Direction 
       else{
           fout.open("output.txt");
           sol[row][col]=0;
           arr[row][col]=-1;
           fout<<"PATH NOT FOUND"<<endl;
           fout.close();
           break;
       }
     }
   }
    //Displaying Stack
    stack.display();
    
    //Deleting the allocated memory 
    delete [] sol;
    delete [] arr;
}
