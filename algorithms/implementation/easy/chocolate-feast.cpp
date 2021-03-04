#include <bits/stdc++.h>

using namespace std;

int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int t;
    cin >> t;
    for (int i = 0; i < t; i ++) {
        int n, c, m, bars = 0, wrappers = 0;
        cin >> n >> c >> m;
        n = n/c;
        while(n > 0) {
            bars += n;
            wrappers += n;
            n = wrappers / m;
            wrappers %= m;
        }
        cout << bars << endl;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution

}
