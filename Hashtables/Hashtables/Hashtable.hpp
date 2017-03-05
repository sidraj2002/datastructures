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

class Node
{
public:
    Node* nextP;
    Node();
    ~Node();
    Node* InsertNode(Node* head, int data);
    void printNode(Node* head);
    int data = NULL;
private:
    
    
};

#endif /* Hashtable_hpp */
