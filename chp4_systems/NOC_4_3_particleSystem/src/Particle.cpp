//
//  Particle.cpp
//  NOC_4_3_particleSystem
//
//  Created by Maria Paula Saba dos Reis on 2/20/13.
//
//

#include "Particle.h"


 Particle::Particle(ofVec2f o){
    
	acceleration = ofVec2f(0, 0.05);
	velocity.set(ofRandom(-1,1), ofRandom(-2,0));
	location = o;
	lifespan = 0.0;
	
	
}

void Particle::run(){
    
    update();
    display();
    
}


void Particle::update(){
    
	velocity += acceleration;
	location += velocity;
	lifespan += 2.0;
	
	
}


void Particle::display(){
    
	
	ofSetColor(lifespan);
	ofFill();
    ofSetCircleResolution(100);
   	ofCircle(location.x, location.y, 5);
    
    ofNoFill();
	ofCircle(location.x, location.y, 5);
	
	
}


Boolean Particle::isDead(){
    
	if(lifespan > 255.0) return true;
	else return false;
	
}
