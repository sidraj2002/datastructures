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
protected:
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
    friend class derivedNode;
    void nThInsert(Node* head, int data, int n);
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

class derivedNode: protected Node
{
public:
    virtual void nThInsert(Node* head, int data, int n) = 0;
    Node* nInsert(Node* head, int n, int data);
};

int* returnSum(int array[], int target);

int* returnSort(int array[]);

////Hashtable////

class Hash {
    
private:
    static const int _tableSize = 10;
    struct Bio {
        
    string name;
    string age;
    Bio* nextP;
        
    }Biostruct;

    Bio* Hashtable[_tableSize];

public:
    Hash();
    void printTable(Hash* table);
    void addEntry(Hash* table, int index, string name, string age);
    int Hashy(string entry);
    void LookUp(Hash* table, string name); 
 
    
};


#endif /* Hashtable_hpp */
