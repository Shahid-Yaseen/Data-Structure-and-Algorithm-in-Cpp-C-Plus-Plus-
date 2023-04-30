#pragma once
#include<iostream>

struct Node{
    //next Node will point to the next of present Node
    Node* next;
    //previous Node will point to the previous of present Node
    Node* previous;
    //data will store the value of present Node
    int data;
};
