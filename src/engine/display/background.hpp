#ifndef __20170320_BACKGROUND_HPP__
#define __20170320_BACKGROUND_HPP__

#include "engine/display/drawable.hpp"
#include <SFML/Graphics.hpp>

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Display Things
  namespace Display {
    
    // Background
    class Background : public Drawable {
      private:
        sf::Sprite spr; // Sprite for draw

      public:
        Background() = default;

        // Position Set
        void setPosition (const sf::Vector2i& position);
        void setPosition (int x, int y);

        // Position Get
        sf::Vector2i getPosition();
        int getPositionX();
        int getPositionY();

        // Position Move
        sf::Vector2i move(const sf::Vector2i& vector);
        sf::Vector2i move(int x, int y);

        // Set a Texture
        void setTexture (const sf::Texture* texture);

        // Visible Rectangle
        void setVisibleArea (const sf::IntRect& rect);
        void setVisibleArea (const sf::Vector2i& p1, const sf::Vector2i& p2);
        void setVisibleArea (int x1, int y1, int x2, int y2);

        // Redefine Draw
        virtual void draw(sf::RenderWindow& window) const;

    }; // Drawable

 }; // Display
}; // GE

#endif /* __20170320_BACKGROUND_HPP__ */
