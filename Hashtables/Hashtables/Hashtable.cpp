//
//  Hashtable.cpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//


///////////////////////////////////////
#include "Hashtable.hpp"
#include <iostream>
#include <pthread.h>
#include <unistd.h>

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

    Node* temp = new Node();
    temp = head;
    while(temp!=NULL){
        printf("%d\n", temp->data);
        temp = temp->nextP;
    }

}

void Node::nThInsert(Node* head, int data, int n){
    
}

Node* derivedNode::nInsert(Node *head, int n, int data){
    Node* temp = new Node();
    Node* temp2 = new Node();
    temp = head;
    
    for(int i=0; i<n; i++){
        temp = temp->nextP;
    }
    temp2->data = data;
    temp2->nextP = temp->nextP;
    temp->nextP = temp2;
    
    return head;
}

//swap nodes in Linked List

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

//attemp at Bubblesort directly to Linked List

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

//List to array

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

int* returnSum(int array[], int target){
    int sumElementID[2] = {'0','0'};
    int* var = NULL;
    int sum = 0;
    int ArrayCount = 0;
    int i = 0;
    while(array[ArrayCount] != 0){
        ArrayCount++;
    }
    
    for(i = 0; i<ArrayCount; i++){
        
        for (int j = 0; j<ArrayCount; j++){
            sum = 0;
            sum = array[j] + array[i];
            if(sum == target){
                sumElementID[0]= i;
                sumElementID[1]= j;
                var = sumElementID;
                return var;
            }
        }
        
    }
    return 0;
}

int* returnSort(int array[]){
    int* var = NULL;
    int arrayCount = 0;
    
    while(array[arrayCount] != 0){
        arrayCount++;
    }
    
    for(int i = 0; i<arrayCount; i++){
        int temp = 0;
        if(array[i]>array[i+1] && array[i+1]!=0){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }
        
    }
    var = array;
    return var;
};

/*
void* returnSortA(int* array[], int arrayCount){
    
    for(int* i = 0; i< array[arrayCount/2]; i++){
        int temp = 0;
        if(array[i]>array[i+1] && array[i+1]!=0){
            temp = array[i];
            array[i] = array[i+1];
            array[i+1] = temp;
        }

    }
}
*/

///Hashtable///===================================================================

Hash::Hash(){
    
    for(int i = 0; i<_tableSize; i++){
        
        Hashtable[i] = new Bio;
        Hashtable[i]->name = "empty";
        Hashtable[i]->age = "empty";
        Hashtable[i]->nextP = NULL;
        
        
    };
    
}

int Hash::Hashy(string entry){
    
    int temp = 0;
    int Hash = 0;
    
    for(int i = 0; i<_tableSize; i++){
        temp = temp + (int)entry[i];
    }
    Hash = temp%_tableSize;
    
    return Hash;
};

void Hash::printTable(Hash* table){
    
    pid_t pidx;
    
    pidx = fork();
    
    if(pidx<0){
        cout<<"Failed to initialize fork()"<<endl;
    }else if(pidx == 0){
    
    for(int i = 0; i< _tableSize; i++){
        cout<< "Table value Name = "<< table->Hashtable[i]->name <<endl;
        cout<< "Table value Age = "<< table->Hashtable[i]->age <<endl;
        cout<< "Table value Index = "<< i <<endl;
    }
        exit(0);
    }
    //wait(NULL);
}


void Hash::addEntry(Hash* table, int index, string name, string age){
    
    if(table->Hashtable[index]->name == "empty"){
        Hashtable[index]->name = name;
        Hashtable[index]->age = age;
    }else{
        Bio temp = *new Bio;
        Hashtable[index]->nextP = &temp;
        temp.name = name;
        temp.age = age;
        temp.nextP = NULL;
    }
}

void Hash::LookUp(Hash* table, string name){
    int HashValue = Hashy(name);
    Bio* temp = new Bio;
    temp = Hashtable[HashValue]; /// Needs work
    if(Hashtable[HashValue]->name == name){
    cout<< "Age is: " << Hashtable[HashValue]->age << endl;
    } else {
        while(temp!=NULL || temp->nextP!=NULL){
            
            temp = temp->nextP;
        }
        
        cout << "Age Traversed is: " << temp->age << endl;
    };
    
}
