//
//  BinaryTree.hpp
//  Datastructures
//
//  Created by Siddharth Rajguru on 2/18/17.
//  Copyright © 2017 Siddharth Rajguru. All rights reserved.
//

#ifndef BinaryTree_hpp
#define BinaryTree_hpp

#include <stdio.h>





struct nodeLeaf* insertLeaf(int value, struct nodeLeaf* tempLeaf);
void printLeaf(struct nodeLeaf* headLeaf);
struct nodeLeaf* nodeInit(struct nodeLeaf* headLeaf);

#endif /* BinaryTree_hpp */
