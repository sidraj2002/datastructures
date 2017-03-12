//
//  Hashtable.cpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#include "Hashtable.hpp"
#include <iostream>

using namespace std;

Node::Node(){
    
    data = 0;
    Node* nextP = NULL;
};

Node::~Node(){
    //delete &data;
    //delete  nextP;
};

Node* Node::InsertNode(Node* head, int data){
    Node* temp = new Node();
    if(head->nextP == NULL){
        head->data = data;
        temp->nextP = head;
        
    } else if(head->nextP!=NULL){
        temp->nextP = head;
        temp->data = data;
    }
    
    return temp;
};


void Node::printNode(Node* head){
    while(head!=NULL){
    Node* temp = new Node();
    temp = head;
    while(temp->nextP != NULL){
        printf("%d\n", temp->data);
        temp = temp->nextP;
    }
}
}

Node* Node::SwapNode(Node *head, int _elementId){
    Node* swaptemp;
    Node* swaptemp2 = new Node();
    Node* _swapHolder = new Node();
    swaptemp = head;
    for(int i=0; i < _elementId; i++ ){
        swaptemp = swaptemp->nextP;
    };
    
    swaptemp2 = swaptemp->nextP;
    _swapHolder->data = swaptemp->data;
    swaptemp->data = swaptemp2->data;
    swaptemp2->data = _swapHolder->data;
    
    //delete swaptemp2;
    
    
    return swaptemp;
}

Node* Node::BubSort(Node *head){
    Node* temp = new Node();
    Node* temp2 = new Node();
    int _numElements = 0;
    
    temp = head;
    while(temp->data != 0){
        _numElements++;
        temp = temp->nextP;
    };
    temp = head;
    temp2 = temp->nextP;
    
    if(temp->data > temp2->data){
            while(temp!= NULL || temp->nextP!=NULL){
            temp = SwapNode(temp, 0); // need work
                temp = temp->nextP;
        
        }
    } else {
        temp = BubSort(temp);
    }

    head = temp;
    
    return head;
}

int* Node::dataToArray(Node* head){
    int* var;
    int _sizeOfList = 0;
    Node* temp = new Node();
    Node* temp2 = new Node();
    temp = head;
    temp2 = temp;
    
    while(temp2->nextP != NULL){
        _sizeOfList++;
        temp2 = temp2->nextP;
    };
    
    int tempArray[_sizeOfList];
    var = tempArray;
    
    for(int i=0; i<_sizeOfList; i++){
        while(temp->nextP!=NULL || temp!=NULL){
        tempArray[i]=temp->data;
        temp = temp->nextP;
    }
    }
    
    for(int j=0; j<_sizeOfList; j++){
        printf("%d\n", tempArray[j]);
    }
    
    return var;
}

// Friend class example......
int Rectangle::Area(int x, int y){
    
    length = x;
    height = y;
    return (length*height);
};

int Volume (const Rectangle &param, int z){
    Rectangle response;
    response.length = param.length;
    response.height = param.height;
    return (response.length)*(response.height)*(z);
}
