#include <SFML/Graphics.hpp>
#include <map>
#include "engine/resources/textures.hpp"

// Generic Game Engine Namespace
namespace GE {
  // Namespace for Resource things
  namespace Resource {
    TextureManager::~TextureManager() {
      for(auto f : this->textures)
        delete f.second;
      this->textures.clear();
    }

    // Access Methods, null if error
    sf::Texture* TextureManager::add(std::string name, std::string filename) {
      auto f = this->textures.find(name);
      if (f == this->textures.end()) {
        sf::Texture* text = new sf::Texture;
        if(!text->loadFromFile(filename)) return nullptr;
        this->textures.insert(std::pair<std::string, sf::Texture*>(name,text));
        return text;
      }
      return f->second;
    }

    sf::Texture* TextureManager::get(std::string name) {
      auto f = this->textures.find(name);
      if(f == this->textures.end()) return nullptr;
      return f->second;
    }

    // If there any problem skipped, no error reported
    void TextureManager::remove(std::string name) {
      auto f = this->textures.find(name);
      if(f == this->textures.end()) return;
      this->textures.erase(f);
    }

    // Get Textures on map
    uint64_t TextureManager::size() {
      return this->textures.size();
    }

  }; // Resource
}; // GE
