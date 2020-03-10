#include <iostream>
using namespace std;

int main() {
  int Result = 88;
  if (Result > 75) {
    cout << "Result: A";
  } else if (Result > 65) {
    cout << "Result: B";
  } else if (Result > 55) {
    cout << "Result: C";
  } else if (Result > 45) {
    cout << "Result: S";
  } else {
    cout << "Result: F";
  }
  return 0;
}
