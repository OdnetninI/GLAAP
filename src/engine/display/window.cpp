#include "window.hpp"

namespace GE {
  namespace Display {

    Window::Window() {
      this->window.create(sf::VideoMode(this->width, this->height), "GLAAP", sf::Style::Titlebar | sf::Style::Close);
      this->window.setFramerateLimit(60);
    }

    void Window::update() {

    }

    void Window::addObject(const Drawable* obj) {
      this->objects.push_back(obj);
    }

    void Window::render() {
      this->window.clear(sf::Color::Black);

      // Draw every object in order 
      for(auto& draw : this->objects)
        draw->draw(this->window);
      this->objects.clear();

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
