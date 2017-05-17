#include "../src/func.h"

#include <iostream>

int main(int argc, char **argv) {
  bool test_res = true;
  int res = add(3, 4);
  if (res != 7) {
    test_res = false;
  }
  int res2 = add(4, 5);
  if (res2 != 7) {
    test_res = false;
  }
  return test_res ? 0 : 1;
}
