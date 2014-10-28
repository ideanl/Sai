#include "../include/basesprite.h"

// constructer
BaseSprite::BaseSprite() {

}

// creates the sprite in memory 
void BaseSprite::create() {

}

// returns width of global bounding rectangle
int BaseSprite::getWidth() {
	return width;
} 

// returns the drawables
std::vector<sf::Transformable*> BaseSprite::getTransformables() {
	return transformables;
}
// returns the height of global bounding rectangle
int BaseSprite::getHeight() {
	return height;
}

// destructer
BaseSprite::~BaseSprite() {

}
