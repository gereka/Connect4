#include "board.h"

Board::Board()
{
  data_ = new char [ numrows_ * numcols_ ];
}

Board::~Board()
{
  delete data_;
}

Board::Board(const Board&)
{
  //implement
}

Board& Board::operator = (const Board&)
{
  //implement
  return *this;
}
  
char Board::get(size_t row, size_t col) const
{
  //implement
  return 0;
}

void Board::set(size_t row, size_t col, char value)
{
  //implement
}

