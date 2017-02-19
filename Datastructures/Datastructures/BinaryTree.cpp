//
//  BinaryTree.cpp
//  Datastructures
//
//  Created by Siddharth Rajguru on 2/18/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#include <sys/types.h>
#include <unistd.h>
#include <iostream>
#include <iomanip>
#include <pthread.h>

#include "BinaryTree.hpp"
#include <iostream>
#include <stdio.h>
#include <string>
#include <stdlib.h>

using namespace std;

struct nodeLeaf* headLeaf = NULL;
struct nodeLeaf* tempLeaf = NULL;
struct nodeLeaf* temp = NULL;
struct nodeLeaf* temp2 = NULL;
struct nodeLeaf* headCopy = NULL;

struct nodeLeaf {
    
    int val = 50;
    struct nodeLeaf* left;
    struct nodeLeaf* right;
    
};

//Initialize each leaf with Null pointers for Left and Right
struct nodeLeaf* nodeInit(struct nodeLeaf* headLeaf){
    
    headLeaf = new (struct nodeLeaf);
    headLeaf->left = NULL;
    headLeaf->right = NULL;
    return headLeaf;
};

//Insert new Leaf. For Root pass in Headleaf first
struct nodeLeaf* insertLeaf(int value, struct nodeLeaf* tempLeaf){
    
    temp2 = nodeInit(temp2);
    
    
    if(value < tempLeaf->val){
        
        tempLeaf->left= temp2;
        temp2->val = value;
        //tempLeaf->right = NULL;
    };
    
    if(value > tempLeaf->val){
        
        tempLeaf->right= temp2;
        temp2->val = value;
        //tempLeaf->left = NULL;
    };
        return temp2;
}

//Recursive print Leaves
void printLeaf(struct nodeLeaf* headLeaf){
    
    if(headLeaf == NULL){
        return;
    }
    printLeaf(headLeaf->left);
    printf("Left%d\n", headLeaf->val);
    printLeaf(headLeaf->right);
    printf("Right%d\n", headLeaf->val);
};

//Create a copy of the Tree
struct nodeLeaf* copyTree(struct nodeLeaf* headLeaf){
    
    headCopy = nodeInit(headCopy);
    
    if(headLeaf == NULL){
        return headCopy;
    }
    
    copyTree(headLeaf->left);
    headCopy->left = headLeaf->left;
    copyTree(headLeaf->right);
    headCopy->right = headLeaf->right;
    
    return headCopy;
};
    
  /*  struct nodeLeaf* printLeaf = NULL;
    printLeaf = nodeInit(printLeaf);
    printLeaf = headLeaf;
    
    while(printLeaf->left!=NULL && printLeaf->left!=NULL){
    
        printf("Left%d\n",printLeaf->val);
        if(printLeaf->left!=NULL){
            printLeaf=printLeaf->left;
        };
        if(printLeaf->right!=NULL){
            printLeaf=printLeaf->right;
        }
        
    };
    
    printLeaf = nodeInit(printLeaf);
    printLeaf = headLeaf;
    
    while(printLeaf->right!=NULL){
        
        printf("Right%d\n",printLeaf->val);
        printLeaf=printLeaf->right;
        
    }
    */

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    
    /* head = insertNode(8);
     head = insertNode(7);
     head = insertNode(6);
     head = insertNode(5);
     head = insertNode(4);
     head = insertNode(3);
     head = insertNode(2);
     head2 = replicateList(head);
     printList(head);
     printList(head2);*/
    
    temp2 = new (struct nodeLeaf);
    
    headLeaf = nodeInit(headLeaf);
    temp = nodeInit(temp);
    temp = insertLeaf(30, headLeaf);
    temp = insertLeaf(60, headLeaf);
    temp = insertLeaf(70, temp);
    temp = insertLeaf(20, temp);
    temp = insertLeaf(60, temp);
    temp = insertLeaf(80, temp);
    
    printLeaf(headLeaf);
    printf("Empty Copy Leaf\n");
    printLeaf(headCopy);
    printf("Launching Child process to Copy Tree\n");
    pid_t pid1 = fork();
    
    if(pid1 < 0){
        printf("Fork error\n");
        exit(1);
    } else if(pid1 == 0){
        
        printf("I am a child %d\n", getpid());
        headCopy = copyTree(headLeaf);
        printLeaf(headCopy);
        exit(0);
    }
    
    
    return 0;
}

