#include "window.h"

int main() {
  const int window_width = 600;
  const int window_height = 550;

  MyWindow *window = new MyWindow(window_width,window_height, "Connect 4");
  window->show();


  return Fl::run();
}
