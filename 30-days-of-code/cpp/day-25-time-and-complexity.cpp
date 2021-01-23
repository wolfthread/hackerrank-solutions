#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
bool isPrime(int n) {
    if (n <= 3) {
        return n > 1;
    }
    if (n % 2 == 0 || n % 3 == 0) {
        return false;
    }
    int i = 5;
    while (pow(i, 2) <= n) {
      if (n % i == 0 || n % (i + 2) == 0) {
          return false;
      }
      i += 6;
    }
    return true;
}

int main() {
    int T, n;
    cin >> T;
    for (int i=0; i<T; i++) {
      cin >> n;
      if (isPrime(n)) {
        cout << "Prime" << endl;
      } else {
        cout << "Not prime" << endl;
      }
    }
    return 0;
}
//---------------------------------------------------------------------------------------
// End Solution    
