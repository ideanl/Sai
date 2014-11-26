#ifndef SCENE_H
#define SCENE_H
#include <string>
#include <vector>
#include <map>
#include "basesprite.h"
#include "eventmanager.h"

class Scene {
  public:
    std::string name;
	// creates the scene in memory
	virtual void create() = 0;
	// updates the scene
    void update();
	// draws the scene
    void render();
	// sets the window pointer
    void setWindowPointer(sf::RenderWindow* window);
    void setEventManager(EventManager* eventMan);
    virtual void sceneUpdate() = 0;
  protected:
    sf::RenderWindow* windowPointer;
    EventManager* eventManager;
    std::map<std::string, BaseSprite*> sprites;
};

class StartScene: public Scene {
  public:
  	// creates the start scene in memory
    void create();
    void sceneUpdate();
};

class MainScene: public Scene {
  public:
    void create();
    void sceneUpdate();
};

#endif
