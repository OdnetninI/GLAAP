#include "engine/display/background.hpp"

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Display Things
  namespace Display {
   
    // Position Set
    void Background::setPosition(const sf::Vector2i& position) {
      this->spr.setPosition(position.x, position.y);
    }

    void Background::setPosition(int x, int y) {
      this->spr.setPosition(x,y);
    }

    // Set a Texture
    void Background::setTexture(const sf::Texture* texture) {
      this->spr.setTexture(*texture);
    }

    // Visible Rectangle
    void Background::setVisibleArea(const sf::IntRect& rect) {
      this->spr.setTextureRect(rect);
    }

    // Redefine Draw
    void Background::draw(sf::RenderWindow& window) const {
      window.draw(this->spr);
    }

  }; //Display
}; // GE
