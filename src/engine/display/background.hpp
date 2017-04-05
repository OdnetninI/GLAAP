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

      public:
        BackGround() = default;

        // Position Set
        void setPosition (const sf::Vector2i& position);
        void setPosition (int x, int y);

        // Set a Texture
        void setTexture (const sf::Texture* texture);

        // Visible Rectangle
        void setVisible (const sf::IntRect& rect);
        void setVisible (const sf::Vector2i& p1, const sf::Vector2i& p2);
        void setVisible (int x1, int y1, int x2, int y2);

        // Redefine Draw
        void draw(const sf::RenderWindow& window);

    }; // Drawable

 }; // Display
}; // GE

#endif /* __20170320_BACKGROUND_HPP__ */
