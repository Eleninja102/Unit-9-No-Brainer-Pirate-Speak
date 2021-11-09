//
//  Pirate.h
//  Unit 9: No Brainer Pirate Speak
//
//  Created by Coleton Watt on 11/8/21.
//

#ifndef Pirate_h
#define Pirate_h

#include <iostream>
#include <sstream>
#include <fstream>

using namespace std;

class Pirate{
public:
    string translateWord(string);
    string translateSentence(string);
    void addToFile(string, string);
};
#endif /* Pirate_h */
