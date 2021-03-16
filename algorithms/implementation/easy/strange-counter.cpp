#include <bits/stdc++.h>

using namespace std;

int main () {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    long t;
    cin >> t;
    long counter = 3;
    long currTime = 4;
    while (currTime <= t) {
        currTime = currTime * 2 + 2;
    }
    cout << currTime - t;
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}
