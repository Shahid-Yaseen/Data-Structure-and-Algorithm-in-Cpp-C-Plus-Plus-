#pragma once
#include<iostream>
using namespace std;
#include<string>
struct Node{
    //next Node<T> will point to the next of present Node<T>
    Node();
    Node(int ,string);
    Node* next;
    int id;
    string name;
    void display();
     
};
Node::Node(){
    next=nullptr;
}
Node::Node(int id,string name){
    this->id=id;
    this->name=name;
    next=nullptr;
}
void Node::display(){
      cout<<"Name is : "<<name<<std::endl;
    cout<<"ID is : "<<id<<std::endl;
}

