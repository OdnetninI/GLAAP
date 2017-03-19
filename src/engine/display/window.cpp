#include "window.hpp"

namespace GE {
  namespace Display {

    Window::Window() {
      this->window.create(sf::VideoMode(WIDTH, HEIGHT), "GLAAP", sf::Style::Titlebar | sf::Style::Close);
    }

    void Window::update() {

    }

    void Window::render() {
      this->window.clear(sf::Color::Black);

      for(auto& draw : this->objects)
        draw->draw(this->window);

      this->window.display();
    }

  }; // Display
}; // GE
