//
//  LinkedList.h
//  NodeThingy
//
//  Created by Erickson, Ian on 2/11/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "List.hpp"

using namespace std;

#ifndef LinkedList_hpp
#define LinkedList_hpp

template <class Type>
class LinkedList : public List <Type>
{
protected:
    LinearNode<Type> * front;
    LinearNode<Type> * end;
public:
    LinkedList();
    virtual ~LinkedList();
    int getSize() const;
    LinearNode<Type> * getFront();
    LinearNode<Type> * getEnd();
    
    void add(Type item);
    void addAtIndex(int index, Type item);
    Type getFromIndex(int index);
    Type remove(int index);
//    Type setAtIndex(int index, Type item);
//    bool contains(Type item);
}

LinkedList<Type> :: LinkedList()
{
    this->front = nullptr;
    this->end = nullptr;
    this->size = 0;
}



#endif /* LinkedList_h */
