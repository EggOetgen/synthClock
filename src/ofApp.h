#pragma once

#include "ofMain.h"
#include "ofxMaxim.h"
#include "clockSynth.hpp"

class ofApp : public ofBaseApp{

	public:
		void setup();
		void update();
		void draw();

		void keyPressed(int key);
		void keyReleased(int key);
		void mouseMoved(int x, int y );
		void mouseDragged(int x, int y, int button);
		void mousePressed(int x, int y, int button);
		void mouseReleased(int x, int y, int button);
		void mouseEntered(int x, int y);
		void mouseExited(int x, int y);
		void windowResized(int w, int h);
		void dragEvent(ofDragInfo dragInfo);
		void gotMessage(ofMessage msg);
    void audioOut(float * output, int bufferSize, int nChannels);
    void audioIn(float * input, int bufferSize, int nChannels);
    float 	* lAudioOut; /* outputs */
    float   * rAudioOut;
    
    float * lAudioIn; /* inputs */
    float * rAudioIn;
    
    int sampleRate, bufferSize;
    
    
    vector <float> lAudio;
    vector <float> rAudio;
    double outputs[2];
    

    time_t timer;
    int h, s, m;
   int numOsc = 10;
    //vector<maxiOsc
   maxiOsc osc1, osc2, osc3, osc4, osc5, osc6, osc7, osc8,osc9, osc10, osc11, osc12;
   
};
