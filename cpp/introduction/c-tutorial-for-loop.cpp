#include <iostream>
#include <cstdio>
#include <string>
using namespace std;

int main() {
    // Complete the code.
    int a, b;
    string numbers[] = {"one", "two", "three", "four", "five", "six", "seven", "eight", "nine"};
    cin >> a >> b;
    for (int i = a; i < b + 1; i++) {
      if (i <= 9) {
        cout << numbers[i - 1] << endl;
      } else if (i % 2 == 0) {
        cout << "even" << endl;
      } else {
        cout << "odd" << endl;
      }
    }
    return 0;
}