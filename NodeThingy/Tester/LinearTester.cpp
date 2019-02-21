//
//  LinearTester.cpp
//  NodeThingy
//
//  Created by Erickson, Ian on 2/19/19.
//  Copyright © 2019 CTEC. All rights reserved.
//

#include "LinearTester.hpp"

#include <iostream>
using namespace std;

void LinearTester :: testVsSTL()
{
    Timer crimeTimerSTL, crimeTimerOOP, musicSTL, musicOOP;
    
    crimeTimerSTL.startTimer();
    vector<CrimeData> crimes = FileController :: readCrimeDataToVector("../Resources/crime.csv");
    crimeTimerSTL.stopTimer();
    
    crimeTimerOOP.startTimer();
    LinkedList<CrimeData> moreCrimes = FileController :: readDataToList("../Resources/crime.csv");
    crimeTimerOOP.stopTimer();
    
    crimeTimerSTL.displayInformation();
    crimeTimerOOP.displayInformation();
    cout << "A difference of: " << crimeTimerOOP.getTimeInMicroseconds() - crimeTimerSTL.getTimeInMicroseconds() << " microseconds" << endl;
    musicSTL.startTimer();
    vector<Music> tunez = FileController :: musicDataToVector("../Resources/music.csv");
    musicSTL.stopTimer();
    
    musicOOP.startTimer();
    LinkedList<Music> musicList = FileController :: musicDataToList("../Resources/music.csv");
    musicOOP.stopTimer();
    
    musicSTL.displayInformation();
    musicOOP.displayInformation();
    cout << "A difference of: " << musicOOP.getTimeInMicroseconds() - musicSTL.getTimeInMicroseconds() << " microseconds" << endl;
    
    crimeTimerOOP.resetTimer();
    crimeTimerSTL.resetTimer();
    musicOOP.resetTimer();
    musicSTL.resetTimer();
    
}

