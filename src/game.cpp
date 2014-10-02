#include "../include/game.h"
#include <iostream>

Game::Game(int g_width = 800, int g_height = 600, std::string g_title = "--Title--") {
  width = g_width;
  height = g_height;
  title = g_title;
  window.create(sf::VideoMode(width, height), title);
  eventManager.setWindowPointer(window);
  start();
}

void Game::start() {
  while(window.isOpen()) {
    run();
  }
}

void Game::update() {
  eventManager.checkWindow();
}

void Game::render() {
  window.clear(sf::Color::Black);
  window.display();
}

void Game::run() {
  update();
  render();
}

Game::~Game() {

}
