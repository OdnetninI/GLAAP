#include "engine/core.hpp"

int main (int argc, char* argv[]) {
  GE::Display::Window window;
  window.render();
  sf::sleep(sf::seconds(10));
  return 0;
}
