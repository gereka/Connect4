#include <FL/Fl.H>
#include <FL/Fl_Window.H>
#include <FL/Fl_Box.H>

#include "board.h"

class Canvas: public Fl_Box
{
 public:
  Canvas(int x, int y, int w, int h);
  ~Canvas();
  void draw() override;
 private:
  Board* board_;
};

class MyWindow: public Fl_Window
{
 public:
  MyWindow(int w, int h, const char* title = 0);
  ~MyWindow();
 private:
  Canvas* canvas_;
};

