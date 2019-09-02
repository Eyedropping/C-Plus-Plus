#include <iostream>

int main() {
  
  // Output from 1 to steps:
  
  int steps = 10;
  
  for (int i = 1 /* the 'i' var was intentionally 0, so the code repeated tover 10 times instead of 9 */; i <= steps; i++) {
    
    std::cout << "Step #";
    std::cout << i << "\n";
    
  }
  
}
