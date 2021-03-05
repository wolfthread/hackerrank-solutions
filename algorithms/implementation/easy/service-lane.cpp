#include <bits/stdc++.h>

using namespace std;

int main () {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n,t;
    cin >> n >> t;
    int widths[n];
    for (int i = 0; i < n; i++) {
        cin >> widths[i];
    }
    for (int i = 0; i < t; i++) {
        int low, high;
        cin >> low >> high;
        int min = 3;
        while (low != high + 1) { 
            if (widths[low] < min) {
                min = widths[low];
            }
            low++;
        }
        cout << min << endl;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}