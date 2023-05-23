#pragma once
#include<string>
#include<iostream>
using namespace std;
class Data{
    protected:
    int id;
    string name;
    public:
    void setName(string n);
    void setID(int id);
    int getID();
    string getName();
    Data();
    Data(int id,string name);
    bool operator==(Data& );
    Data operator=(Data& );
    void display();
    void input();
};
Data Data::operator=(Data& d){
    this->setName(d.getName());
    this->setID(d.getID());
    return *this;
}
void Data::setName(string n){
    name=n;
}
void Data::input(){
    std::cout<<"ENTER YOUR NAME ";
    std::cin>>name;
    std::cout<<"ENTER YOUR ID ";
    std::cin>>id;
}
void Data::display(){
      cout<<"Name is : "<<name<<std::endl;
    cout<<"ID is : "<<id<<std::endl;
}
    void Data::setID(int id){
        this->id=id;
    }
    int Data::getID(){
        return id;
    }
    string Data::getName(){
        return name;
    }


 
 bool Data::operator==(Data& d){
     if(d.id==id&&d.name==name){
         return true;
     }
     else{
         return false;
     }
 }

Data::Data(){
 id=0;
 name="\0";
}
Data::Data(int id,string name){
    this->id=id;
    this->name=name;
}