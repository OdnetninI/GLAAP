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
    // Basic Window Class
    class Window {
      private:
        sf::RenderWindow window;                // sfml window object
        std::vector<Drawable*> objects;   // draw object list
        uint16_t width = 1280;
        uint16_t height = 720;

      public:
        Window();
        
        void addObject(const Drawable* obj);

        void update();
        void render();

        void checkForClose();
        bool isOpen();
        void close();

    }; // Window

  }; // Display
}; // GE

#endif /* __20170319_WINDOW_HPP__ */
