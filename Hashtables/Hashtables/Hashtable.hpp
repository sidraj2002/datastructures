//
//  Hashtable.hpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#ifndef Hashtable_hpp
#define Hashtable_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Node
{
private:
    int data = NULL;
    Node* nextP;
public:
    
    Node();
    ~Node();
    Node* InsertNode(Node* head, int data);
    void printNode(Node* head);
    Node* BubSort(Node* head);
    Node* SwapNode(Node* head, int _elementId);
    int* dataToArray(Node* head);
};

class Rectangle {
    
private:
    int length = NULL;
    int height = NULL;
    
public:
    Rectangle(){};
    ~Rectangle(){};
    int Area (int x, int y);
    friend int Volume(const Rectangle &param, int z);
};


#endif /* Hashtable_hpp */
