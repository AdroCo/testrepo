#include "../src/func.h"

#include <iostream>

int main(int argc, char **argv) {
  int res = add(3, 4);
  if (res == 7) {
    return 0;
  }
  return 1;
}
