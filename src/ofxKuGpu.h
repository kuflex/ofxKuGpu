#pragma once

//openFrameworks addon for image computations using GLSL
#include "ofMain.h"


//Compute non-zero image area
struct ofxKuGpuImageArea {
	ofxKuGpuImageArea();
	float getNonZeroRelativeArea(ofTexture &texture);
	

private:
	bool inited_;
	ofShader shared_area_;
};

