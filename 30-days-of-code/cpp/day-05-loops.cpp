#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    // Begin Solution
    //---------------------------------------------------------------------------------------
    for (int i=1; i<=10; i++) {
        cout << n << " x " << i << " = " << n * i <<  endl;
    }
    //---------------------------------------------------------------------------------------
    // End Solution

    return 0;
}
