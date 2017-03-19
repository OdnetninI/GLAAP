#ifndef __20170319_WINDOW_HPP__
#define __20170319_WINDOW_HPP__

#include <SFML/Graphics.hpp>
#include <cstdint>
#include <vector>
#include "engine/display/drawable.hpp"

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Display Things
  namespace Display {
    static const uint16_t WIDTH = 1280;
    static const uint16_t HEIGHT = 720;

    // Basic Window Class
    class Window {
      private:
        sf::RenderWindow window;                // sfml window object
        std::vector<Drawable*> objects;   // draw object list

      public:
        Window();
        
        void addObject(const Drawable* obj);

        void update();
        void render();

    }; // Window

  }; // Display
}; // GE

#endif /* __20170319_WINDOW_HPP__ */
