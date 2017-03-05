//
//  Hashtable.cpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#include "Hashtable.hpp"

using namespace std; 

Node::Node(){
    
    data = NULL;
    nextP = NULL;
};

Node::~Node(){
    
}

Node* Node::InsertNode(Node* head, int data){
    Node* temp = new Node();
    temp = head;
    if(temp->nextP == NULL){
        temp->data = data;
        temp->nextP = NULL;
    } else {
        while(temp->nextP != NULL){
            temp = temp->nextP;
        };
        InsertNode(temp, data);
    }
    return temp;
};

void Node::printNode(Node* head){
    Node* temp = new Node();
    temp = head;
    while(temp->nextP != NULL){
        printf("%d\n", temp->data);
        temp = temp->nextP;
    }
}
