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
    int data = NULL;
    Node* nextP;
public:
    
    Node();
    ~Node();
    Node* InsertNode(Node* head, int data);
    void printNode(Node* head);
        private:
};


#endif /* Hashtable_hpp */
