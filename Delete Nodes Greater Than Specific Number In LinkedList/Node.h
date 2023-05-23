#pragma once
#include<iostream>
using namespace std;
template<typename T>
struct Node{
    //next Node<T> will point to the next of present Node<T>
    Node<T>* next;
    //data will store the value of present Node<T>
    T data;
};
