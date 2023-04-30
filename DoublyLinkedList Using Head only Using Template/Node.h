#pragma once
#include<iostream>
template <typename T>
struct Node{
    //next Node will point to the next of present Node
    Node<T>* next;
    //previous Node will point to the previous of present Node
    Node<T>* previous;
    //data will store the value of present Node
    T data;
};
