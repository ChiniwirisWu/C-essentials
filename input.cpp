#include <iostream>
#include <limits>
#include "input.h"

void clearInput(){
  std::cin.clear(); 
  std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
}
