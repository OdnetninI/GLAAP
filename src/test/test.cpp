#include "test/test.hpp"
#include "engine/core.hpp"
#include <iostream>
#include <cassert>

void launchTests() {
  std::cerr << "[---] Initialize Tests" << std::endl;
  testResources();
  testDisplay();
  std::cerr << "[---] Test Completed" << std::endl;
}

void testResources() {
  std::cerr << "[---] - Init Resources Tests" << std::endl;
  std::cerr << "[---] - - Texture Test" << std::endl;
  
  GE::Resource::TextureManager texturemng;
  assert(texturemng.add("1", "file.png") != nullptr);
  assert(texturemng.size() == 1);
  assert(texturemng.add("1", "file.png") != nullptr);
  assert(texturemng.size() == 1);
  assert(texturemng.add("1", "file.png") != nullptr);
  assert(texturemng.size() == 1);
  assert(texturemng.add("2", "file.png") != nullptr);
  assert(texturemng.size() == 2);
  texturemng.remove("2");
  assert(texturemng.size() == 1);
  texturemng.remove("1");
  assert(texturemng.size() == 0);
  texturemng.remove("1");
  assert(texturemng.size() == 0);
  std::cerr << "[---] - - Texture Passed" << std::endl;

  std::cerr << "[---] - Finished Resources Tests" << std::endl;
}

void testDisplay() {
  std::cerr << "[---] - Init Display Tests" << std::endl;
  std::cerr << "[---] - - Window Test" << std::endl;
  GE::Display::Window window;
  for (int i = 0; i < 10; i++) {
    window.checkForClose();
    window.render();
  }
  std::cerr << "[---] - - Window Passed" << std::endl;

  std::cerr << "[---] - Finished Display Tests" << std::endl;
}
