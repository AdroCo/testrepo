#include "test1.h"

#include "../src/func.h"

void Test1::TestNumber1() {
  int res = add(3, 4);
  TS_ASSERT_EQUALS(res, 7);
}

void Test1::TestNumber2() {
  int res = add(4, 5);
  TS_ASSERT_EQUALS(res, 9);
}
