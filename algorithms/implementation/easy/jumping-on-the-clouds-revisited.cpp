#include <bits/stdc++.h>
using namespace std;

int main()
{
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n, k;
    cin >> n >> k;
    int c[n];
    for (int i = 0; i < n; i++) {
        cin >> c[i];
    }
    int e = 100;
    int j = 0;
    if (n == k) {
        e -= (1 + c[0] * 2);
        cout << e << endl;
    } else {
        do {
            e -= (1 + c[(j + k) % n] * 2);
            j += k;
        } while ((j + k) % n != 0);
        e -= (1 + c[0]*2);
        cout << e << endl;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}
