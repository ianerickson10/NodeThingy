//
//  Array.hpp
//  NodeThingy
//
//  Created by Erickson, Ian on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#ifndef Array_hpp
#define Array_hpp

#includes <assert.h>
#includes <iosteam>

using namespace std;

template <class Type>
class Array
{
private:
    Type * internalArray;
    int size;
public:
    Array<Type>(int size);
    
    Array<Type>(const Array<Type> & toCopy);
    
    ~Array,<Type>();
    
    Array<Type> & operator = (const Array<Type> & toReplace);
    Type& operator [] (int index);
    Type operator [] (int index) const;
    
    int getSize() const;
    Type getFromIndex(int index);
    void setAtIndex(int index, Type data);
}

#endif /* Array_hpp */
