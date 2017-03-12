//
//  main.cpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#include <iostream>
#include "stdio.h"
#include <string>
#include "Hashtable.hpp"

using namespace std;
Node* head = new Node();

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    string input = "Hello World";
    char tempArray[20] = "";
    strcpy(tempArray, input.c_str());
    int x = 0;
     char j;
    j = tempArray[x];
    while(isalpha(j) || j == ' '){
       j= tempArray[x];
        x++;
    }
    string str;
    
        str.append(&tempArray[0]);
    printf("%s\n", str.c_str());
    
    
    Node temp2;
    head =  head->InsertNode (head, 10);
    head =  head->InsertNode (head, 20);
    head =  head->InsertNode (head, 30);
    head =  head->InsertNode (head, 40);
    head =  head->InsertNode (head, 50);
    head =  head->InsertNode (head, 60);
    head =  head->InsertNode (head, 70);
//    head->~Node();
     head->printNode(head);
//    head->SwapNode(head, 3);
//    head->printNode(head);
    
//    head = head->BubSort(head);
//    head->printNode(head);
//    head->dataToArray(head);
    
// Friend class example
    Rectangle Rect;
    Rect.Area(10,20);
   printf("%d\n", Volume(Rect, 30));
    
    
    return 0;
    
    
}
