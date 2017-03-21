#include "engine/core.hpp"
#include <iostream>

int main (int argc, char* argv[]) {
  GE::Display::Window window;

  GE::Resource::TextureManager texturemng;
  texturemng.add("1", "file.png");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Add Again 1" << std::endl;
  texturemng.add("1", "file.png");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Add Again 1" << std::endl;
  texturemng.add("1", "file.png");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Add 2" << std::endl;
  texturemng.add("2", "file.png");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Remove 2" << std::endl;
  texturemng.remove("2");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Remove 1" << std::endl;
  texturemng.remove("1");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;
  std::cout << "Remove 1 Again" << std::endl;
  texturemng.remove("1");
  std::cout << "Number of Textures: " << texturemng.size() << std::endl;

  while(window.isOpen()) {
    window.checkForClose();
    window.render();
  }
  return 0;
}
