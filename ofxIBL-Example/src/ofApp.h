#pragma once

#include "ofMain.h"
#include "ofxIBL.h"
#include "ofxGui.h"

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
		
    ofxFilteredCubeMap cubemap[3];
    ofxIBL ibl;
    ofxIBLMaterial material;
    
    ofEasyCam cam;
    
    ofxPanel gui;
    ofParameter<ofColor> baseColor;
    ofParameter<bool> useBaseColorMap;
    ofParameter<bool> useNormalMap;
    ofParameter<float> normalVal;
    ofParameter<int> environment;
    
    ofImage baseColorTex, normalTex;
};
