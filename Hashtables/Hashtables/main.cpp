//
//  main.cpp
//  Hashtables
//
//  Created by Siddharth Rajguru on 3/5/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

 /////////////////////////////
 #include <iostream>
 #include "stdio.h"
 #include <string>
 #include "Hashtable.hpp"
 #include <pthread.h>

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
//     head->printNode(head);
//    head->SwapNode(head, 3);
//    head->printNode(head);
    
//    head = head->BubSort(head);
//    head->printNode(head);
//    head->dataToArray(head);
    
 //   head->nThInsert();

 //    derivedNode* headnew = new derivedNode();
     
// Friend class example
//    Rectangle Rect;
//    Rect.Area(10,20);
//   printf("%d\n", Volume(Rect, 30));
     
/*
     int testArray[10]= {4, 2, 1, 7, 5, 12, 20, 13, 22, 21};
     
     int* SortedArray;
     SortedArray = returnSort(testArray);
     SortedArray = returnSort(testArray);
     
     for(int i = 0; i<10; i++ ){
         printf("%d\n", SortedArray[i]);
     }
     
     int* array = returnSum(testArray, 32);

     printf("%d%d", testArray[array[0]], testArray[array[1]]);
 
 */
 
 ///Hashtable///
 
     Hash* test = new Hash();
     
     int HashValue = 0;
     
     HashValue = test->Hashy("Siddharth");
     test->addEntry(test, HashValue, "Siddharth", "29");
     HashValue = test->Hashy("Siddharth");
     test->addEntry(test, HashValue, "Siddharth", "29");
     HashValue = test->Hashy("Aniruddha");
     test->addEntry(test, HashValue, "Aniruddha", "22");
     HashValue = test->Hashy("Dexter");
     test->addEntry(test, HashValue, "Dexter", "39");
     HashValue = test->Hashy("Jerry");
     test->addEntry(test, HashValue, "Jerry", "19");
     HashValue = test->Hashy("Ramesh");
     test->addEntry(test, HashValue, "Ramesh", "21");
     HashValue = test->Hashy("Jacob");
     test->addEntry(test, HashValue, "Jacob", "19");
     HashValue = test->Hashy("Matt");
     test->addEntry(test, HashValue, "Matt", "12");
     HashValue = test->Hashy("Lindsey");
     test->addEntry(test, HashValue, "Lindsey", "13");
     HashValue = test->Hashy("Derek");
     test->addEntry(test, HashValue, "Derek", "14");
     HashValue = test->Hashy("Rachel");
     test->addEntry(test, HashValue, "Rachel", "15");
     HashValue = test->Hashy("Aditi");
     test->addEntry(test, HashValue, "Aditi", "16");
     HashValue = test->Hashy("Amanda");
     test->addEntry(test, HashValue, "Amanda", "17");
     //test->printTable(test);
     test->LookUp(test, "Amanda");
     
    
     return 0;
}
