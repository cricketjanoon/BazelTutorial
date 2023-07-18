#include <string>

#include "lib1.h"

int main() {
  std::string my_string = "==============================\nBuilding a library with multiple source files.\n==============================";
  CLib1::PrintLine(my_string);
  return 0;
}