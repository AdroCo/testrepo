#include "test2.h"

#include "../src/func.h"

void Test2::TestNumber3() {
  int res = add(3, 4);
  TS_ASSERT_EQUALS(res, 7);
}

void Test2::TestNumber4() {
  int res = add(4, 5);
  TS_ASSERT_EQUALS(res, 9);
}
