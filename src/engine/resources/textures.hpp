#ifndef __20170320_TEXTURES_HPP__
#define __20170320_TEXTURES_HPP__

#include <SFML/Graphics.hpp>
#include <map>

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Resource things
  namespace Resource {
    // Texture Manager
    class TextureManager {
      private:
        std::map<std::string, sf::Texture*> textures; // Texture store

      public:
        TextureManager() = default;
        ~TextureManager();

        // Access Methods, null if error
        sf::Texture* add(std::string name, std::string filename);
        sf::Texture* get(std::string name);

        // If there any problem skipped, no error reported
        void remove(std::string name);

        // Get Textures on map
        uint64_t size();
    };
  }; // Resource
}; // GE

#endif /* __20170320_TEXTURES_HPP__ */
