#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
  int number;
  while (cin >> number) {
    if (number < 0) {
      break;
    } else if (number <= 9) {
      //Special case for single digit input
      cout << 0 << " " << number << endl;
    } else {
      int persistence = 0;
      while (number >= 10) {
        //Repeat until number is a single digit
        int sum = 0;
        while (number != 0) {
          sum += number % 10; //Moduluo division by 10 returns last digit
          number /= 10; //Integer division by 10 removes last digit
        }
        number = sum; //Update the number to the sum of its digits
        ++persistence; //Increment additive persistence
      }
      cout << persistence << " " << number << endl;
    }
  }
  return 0;
}