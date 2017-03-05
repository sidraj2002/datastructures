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
Node* head;
//Node* head = new Node();


int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    Node temp2;
    head = InsertNode (&head, 10);
   // head = temp2;
   head =  InsertNode (&head, 20);
   // head = temp2;
   head =  InsertNode (&head, 30);
   // head = temp2;

     //InsertNode(head, 20);
    
  //Node printNode(head);
    
    return 0;
    
    
}
