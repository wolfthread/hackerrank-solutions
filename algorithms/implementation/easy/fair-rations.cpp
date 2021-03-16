#include <bits/stdc++.h>
#include <list>

using namespace std;

int main () {
// Begin Solution
//---------------------------------------------------------------------------------------
    int sumArray(int p_arr[], int p_size);
    int n;
    cin >> n;
    int B[n];
    for (int i = 0; i < n; i++) {
      cin >> B[i];
    }
    if (sumArray(B, n) % 2 != 0) {
      cout << "NO" << endl;
    } else {
      int counter = 0;
      for (int i = 0; i < n; i ++) {
          if (B[i]%2 != 0) {
              B[i+1]++;
              counter += 2;
          }
      }
      cout << counter << endl;
    }
}

int sumArray(int p_arr[], int p_size) {
  int sum;
  for (int i = 0; i < p_size; i++) {
    sum += p_arr[i];
  }
  return sum;
}
//---------------------------------------------------------------------------------------
// End Solution