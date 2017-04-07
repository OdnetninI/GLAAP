#include "window.hpp"

namespace GE {
  namespace Display {

    Window::Window() {
      // Window Creation
      this->window.create(sf::VideoMode(this->width, this->height), "GLAAP", sf::Style::Titlebar | sf::Style::Close);
      this->window.setFramerateLimit(60);
      this->objects = new std::vector<const Drawable*>[this->layers];
    }

    Window::Window(uint8_t layers) {
      // Window Creation
      this->window.create(sf::VideoMode(this->width, this->height), "GLAAP", sf::Style::Titlebar | sf::Style::Close);
      this->window.setFramerateLimit(60);
      
      // Draw Layers
      this->layers = layers;
      this->objects = new std::vector<const Drawable*>[layers];
    }

    Window::~Window() {
      delete[] this->objects;
    }

    void Window::update() {

    }

    void Window::addObject(uint8_t layer, const Drawable* obj) {
      if (layer >= this->layers) return;
      this->objects[layer].push_back(obj);
    }

    void Window::render() {
      this->window.clear(sf::Color::Black);

      // Draw every layer
      for(uint8_t i = 0; i < this->layers; i++) {
        // Draw every object in order 
        for(auto& draw : this->objects[this->layers-1-i])
          draw->draw(this->window);
        this->objects[this->layers-1-i].clear();
      }

      this->window.display();
    }

    void Window::checkForClose() {
      sf::Event event;
      while(this->window.pollEvent(event))
        if(event.type == sf::Event::Closed)
          this->close();
    }

    bool Window::isOpen() {
      return this->window.isOpen();
    }

    void Window::close() {
      this->window.close();
    }

  }; // Display
}; // GE
