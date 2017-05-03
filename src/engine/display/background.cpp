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

    // Position Get
    sf::Vector2i Background::getPosition() {
      sf::Vector2i vec;
      const auto pos = this->spr.getPosition();
      vec.x = pos.x;
      vec.y = pos.y;
      return vec;
    }

    int Background::getPositionX() {
      return this->spr.getPosition().x;
    }

    int Background::getPositionY() {
      return this->spr.getPosition().y;
    }

    // Position Move
    sf::Vector2i Background::move(const sf::Vector2i& vector) {
      return this->move(vector.x, vector.y);
    }
    
    sf::Vector2i Background::move(int x, int y) {
      this->spr.move(x, y);
      const auto v = this->spr.getPosition();
      return sf::Vector2i(v.x, v.y);
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
