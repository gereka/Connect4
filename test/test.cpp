#include <gmock/gmock.h>

#include "../src/board.h"

using namespace testing;

class BoardFix : public Test
{
public:
  Board b;

  //constructor
  // void SetUp() override
  // also Teardown fxn
};


TEST_F(BoardFix, InitsToZero)
{
  for (int i=0; i<b.numrows_; i++)
    for (int j=0; j<b.numcols_; j++)
      EXPECT_EQ(b.get(i,j), 0);
}
