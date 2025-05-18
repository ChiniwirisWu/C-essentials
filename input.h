#ifndef INPUT
#define INPUT
#include <iostream>
#include <limits>
#include <typeinfo>
#include <string>

void clearInput();

template <typename T>
T getInput(){
  T score {};
  bool isInvalid {true};

  while(isInvalid){
    std::cout << "> "; 
    //if it is a string, I need to take the whole string instead of a substring.
    if(typeid(T).name() == typeid(std::string).name()){
      std::getline(std::cin >> std::ws, score);
    // else I can use the standar input.
    } else {
      std::cin >> score;
    }
    if(!std::cin){
      std::cin.clear(); 
      std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

      std::cout << "Invalid input from user." << std::endl;
      std::cout << "Press any button to continue...";
      std::cin.get(); // this line is to make a break before trying again.
      continue;
    }
    std::cout << std::endl;
    isInvalid = false; // this statement breaks the while loop.
  }
  return score;
}

#endif
