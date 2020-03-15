#include "window.h"

#include <FL/fl_draw.H>
#include <functional>

using namespace std;
using namespace placeholders;

auto fl_circlef = std::bind(fl_pie, _1, _2, _3, _4, 0, 360);

MyWindow::MyWindow(int w, int h, const char* title) :
  Fl_Window(w,h,title)
{
  canvas_ = new Canvas(10,10,720,620);
  this->end();
}

MyWindow::~MyWindow()
{
  delete canvas_;
}

Canvas::Canvas(int x, int y, int w, int h) :
  Fl_Box(x,y,w,h)
{
  board_ = new Board();
}

Canvas::~Canvas()
{
  delete board_;
}

void Canvas::draw()
{
  const int xoffset = 50;
  const int yoffset = 50;
  const int numrows = 6;
  const int numcols = 7;
  const int diameter =  70;
  const int roffset = 3;

  Fl_Color colormap[3] = {FL_BLACK, FL_RED, FL_YELLOW};
  
  fl_rectf(xoffset, yoffset, diameter*numcols,diameter*numrows, FL_BLUE);
  for(int i=0; i<numcols; i++){
    for(int j=0; j<numrows; j++){
      fl_color(colormap[board_->get(i,j)]);
      fl_circlef(xoffset + roffset + i*diameter,
		 yoffset + roffset + j*diameter,
		 diameter - 2*roffset,
		 diameter - 2*roffset);
    }
  }
}
