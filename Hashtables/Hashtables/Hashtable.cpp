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
   Node* nextP = NULL;
};

Node::~Node(){
    
}

Node* InsertNode(Node** head, int data){
    Node* temp = new Node();
    if((*head)->nextP == NULL){
        (*head)->data = data;
        temp->nextP = *head;
        *head = temp;
    } else if((*head)->nextP!=NULL){
        temp->nextP = *head;
        temp->data = data;
        (*head) = temp;
    }
    
    return *head;
};

/*
void Node::printNode(Node** head){
    Node* temp = new Node();
    temp = head;
    while(temp->nextP != NULL){
        printf("%d\n", temp->data);
        temp = temp->nextP;
    }
} */