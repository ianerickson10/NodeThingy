//
//  Tree.h
//  NodeThingy
//
//  Created by Erickson, Ian on 4/12/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Tree_hpp
#define Tree_hpp

template <class Type>
class Tree
{
private:
    Tree<Type> * root;
    Tree<Type> * leftChild;
    Tree<Type> * rightChild;
public:
    Tree<Type>();
    Tree<Type>(Type);
    
    Tree<Type> * getRootNode();
    Tree<Type> * getLeftChild();
    Tree<Type> * getRightChild();
    
    void setRootNode(Tree<Type> * root);
    void setLeftChild(Tree<Type> * leftChild);
    void setRightChild(Tree<Type> * RightChild);
};

template <class Type>
Tree<Type> :: Tree() : Node<Type>()
{
    root = nullptr;
    leftChild = nullptr;
    RightChild = nullptr;
}

template <class Type>
Tree<Type> :: Tree(Type data): Node<Type>(data)
{
    root = nullptr;
    leftChild = nullptr;
    rightChild = nullptr;
}

template <class Type>
void Tree<Type> :: setRootNode(Tree<Type> * newRoot)
{
    root = newRoot;
}

template <class Type>
void Tree<Type> :: setRightChild(Tree<Type> * rightChild)
{
    this->rightChild = rightChild;
}

template <class Type>
void Tree<Type> :: setLeftChild(Tree<Type> * leftChild)
{
    this->leftChild = leftChild;
}

template <class Type>
Tree<Type> * Tree<Type> :: getRootNode()
{
    return this->root;
}

template <class Type>
Tree<Type> * Tree<Type> :: getRightChild()
{
    return this->rightChild;
}

template <class Type>
Tree<Type> * Tree<Type> :: getLeftChild()
{
    return this->leftChild;
}

#endif /* Tree_hpp */
