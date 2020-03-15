#include <cstddef>
class Board
{
 public:
  Board();
  ~Board();
  Board(const Board&);
  Board& operator = (const Board&);

  const size_t numrows_ = 6;
  const size_t numcols_ = 7;

  char get(size_t row, size_t col) const;
  void set(size_t row, size_t col, char value);
  
 private:
  char* data_;
};
