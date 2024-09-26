#include <iostream>
#include <string>
using namespace std;

int main() {
  string cars[3] = {"Volvo", "BMW", "Ford"};  // An array with 3 elements

  // Trying to add another element (a fourth element) to the cars array will result in an error
  cars[3] = "Mazda";

  for (string car : cars) {
    cout << car << "\n";
  }
  
  return 0;
}
