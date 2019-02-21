//
//  Controller.cpp
//  NodeThingy
//
//  Created by Erickson, Ian on 1/30/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "Controller.hpp"

void Controller :: start()
{
    cout << "Welcome to data app" << endl;
    usingNodes();
//    testLinear();
}

void Controller :: usingNodes()
{
    LinearNode<int> mine(5);
    LinearNode<string> wordHolder("words can be stored");
    cout << mine.getData() << endl;
    cout << wordHolder.getData() << endl;
    wordHolder.setData("replaced text");
    cout << wordHolder.getData() << endl;
    
}

//void Controller :: testLinear()
//{
//    LinearTester lookieHere;
//    lookieHere.testVsSTL();
//}
