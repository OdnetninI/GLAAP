#include "engine/core.hpp"
#include <iostream>

#define TEST 0
#if TEST == 1
#include "test/test.hpp"
int main (int argc, char* argv[]) {
  launchTests();
  return 0;
}
#else
int main (int argc, char* argv[]) {

  GE::Display::Window window(1);

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

  GE::Display::Background bg;
  texturemng.add("1", "file.png");
  bg.setTexture(texturemng.get("1"));
  bg.setPosition(50,-160);
  bg.setVisibleArea(sf::IntRect(20,30,200,300));

  while(window.isOpen()) {
    bg.move(1,1);
    window.checkForClose();
    window.addObject(0,&bg);
    window.render();
  }
  return 0;
}
#endif
