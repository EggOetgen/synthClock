//
//  clockSynth.hpp
//  synthClock
//
//  Created by Edmund Oetgen on 08/01/2018.
//
//

#pragma once
#include "ofMain.h"
#include "ofxMaxim.h"
class clockSynth{

public:
    clockSynth(int fund);
    double play(int a, int b, int c);
    
    maxiOsc osc1, osc2, osc3, osc4;
    
    int f;

};