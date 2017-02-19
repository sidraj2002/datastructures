//
//  main.cpp
//  Datastructures
//
//  Created by Siddharth Rajguru on 2/16/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//  Link List manipulation

#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>
#include "BinaryTree.hpp"

using namespace std;

struct node* head2 = NULL;   //Global Replica Head
struct node* head = NULL;   //Global Head


struct node {
    int x = 0;
    struct node* next;
};
// Return type struct pointer: Insert Node to the list in-line. Returns pointer to new Head.

struct node* insertNode(int val){
    struct node* headx;
    struct node* temp;
    
    if(headx != NULL){
        temp = new (struct node);
        temp->x = val;
        temp->next = head;
        headx = temp;
    }
    
    if(headx == NULL){
        temp = new (struct node);
        temp->x = val;
        temp->next = NULL;
        headx = temp;
    }
    return headx;
    
};

// Prints list: Takes a pointer argument for Head node.

void printList(struct node* headNode){
    struct node* temp1;
    
    
    temp1 = headNode;
    while(temp1->next!=NULL){
        
        printf("%d\n", temp1->x);
        temp1 = temp1->next;
    }
    if (temp1->next == NULL){
        printf("%d\n", temp1->x);
    }
}

//Replicate list: Void function takes

struct node* replicateList(struct node* headnode){
    
    struct node* temp2;
    struct node* newHead = NULL;
    temp2 = headnode;
    while(temp2->next!=NULL){
        newHead  = insertNode(temp2->x);
        temp2 = temp2->next;
    }
    return newHead;
}
