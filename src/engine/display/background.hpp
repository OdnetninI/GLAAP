#ifndef __20170320_BACKGROUND_HPP__
#define __20170320_BACKGROUND_HPP__

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Display Things
  namespace Display {
    
    // Background
    class BackGround : public Drawable {
      private:
        sf::Vector2i position; // Use for scrolling or moving
        sf::Texture* texture;  // Texture cache (No need to call resource handler every step)
        sf::Vector2u size;     // Background Size 

      public:
        // Redefine Draw
        void draw(const sf::RenderWindow& window);

    }; // Drawable

 }; // Display
}; // GE

#endif /* __20170320_BACKGROUND_HPP__ */
