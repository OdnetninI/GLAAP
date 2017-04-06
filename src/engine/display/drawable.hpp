#ifndef __20170319_DRAWABLE_HPP__
#define __20170319_DRAWABLE_HPP__

#include <SFML/Graphics.hpp>

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Display Things
  namespace Display {
    
    // Drawable Interface
    class Drawable {
      public:
        virtual void draw(sf::RenderWindow& window) const = 0;

    }; // Drawable

 }; // Display
}; // GE

#endif /* __20170319_DRAWABLE_HPP__ */
