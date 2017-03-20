#include "engine/core.hpp"

int main (int argc, char* argv[]) {
  GE::Display::Window window;
  
  while(window.isOpen()) {
    window.checkForClose();
    window.render();
  }
  return 0;
}
