#include "ofApp.h"

//--------------------------------------------------------------
void ofApp::setup(){

    ofSetFrameRate(60);
    
    ofSetVerticalSync(true);
    ofEnableAlphaBlending();
    ofEnableSmoothing();
    
    
    
    sampleRate 	= 44100; /* Sampling Rate */
    bufferSize	= 1024; /* Buffer Size. you have to fill this buffer with sound using the for loop in the audioOut method */
    
    
    ofxMaxiSettings::setup(sampleRate, 2, bufferSize);
    ofSoundStreamSetup(2,2,this, sampleRate, bufferSize, 4);
}

//--------------------------------------------------------------
void ofApp::update(){

   // cout<<time(&timer)<<endl;
    struct tm * timeinfo;
    
    time ( &timer );
    timeinfo = localtime ( &timer );
  
    h =  timeinfo->tm_hour ;
    h = h%12;
    
    s = timeinfo->tm_sec ;
    m = timeinfo->tm_min ;
    
    
    cout << h <<" "<< s << " "<< m<<" "<< endl;

}
void ofApp::audioOut(float * output, int bufferSize, int nChannels) {
    
    float out = 0;
    
    for (int i = 0; i < bufferSize; i++){
        
        out = osc1.sinewave(261.63 *(1+osc2.sinewave(h*m+s))) *(1 +osc3.sinewave(osc4.sinewave(s+m)));
    //    out *= 0.3;

        out += osc5.sinewave(329.63 *(1+osc6.sinewave(h*m+s))) *(1 +osc7.sinewave(osc8.sinewave(s+m)));
      //  out *= 0.3;

        out += osc12.sinewave(392 *(1+osc9.sinewave(h*m+s))) *(1 +osc10.sinewave(osc11.sinewave(s+m))) ;
        out *= 0.5;

        
        output[i*nChannels    ] = out; /* You may end up with lots of outputs. add them here */
        output[i*nChannels + 1] = out;
        
    }
}

//--------------------------------------------------------------
void ofApp::audioIn(float * input, int bufferSize, int nChannels){
    
    for(int i = 0; i < bufferSize; i++){
        
        
    }
    
}


//--------------------------------------------------------------
void ofApp::draw(){

}

//--------------------------------------------------------------
void ofApp::keyPressed(int key){

}

//--------------------------------------------------------------
void ofApp::keyReleased(int key){

}

//--------------------------------------------------------------
void ofApp::mouseMoved(int x, int y ){

}

//--------------------------------------------------------------
void ofApp::mouseDragged(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mousePressed(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseReleased(int x, int y, int button){

}

//--------------------------------------------------------------
void ofApp::mouseEntered(int x, int y){

}

//--------------------------------------------------------------
void ofApp::mouseExited(int x, int y){

}

//--------------------------------------------------------------
void ofApp::windowResized(int w, int h){

}

//--------------------------------------------------------------
void ofApp::gotMessage(ofMessage msg){

}

//--------------------------------------------------------------
void ofApp::dragEvent(ofDragInfo dragInfo){ 

}
