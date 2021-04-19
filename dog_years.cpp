#include <iostream>

int main() {
  int dog_age = 6; // dog's age as an integer
  int early_years = 21; // represents the first two years of a dog's life in human years
  int later_years = (dog_age - 2) * 4; // calculates human to dog year conversion with account of early years
  int human_years = early_years + later_years; // combines calculations for both halves of dog life
  std::cout << "My name is Scooby! Ruff ruff, I am " << human_years << " years old in human years\n"; 
}
