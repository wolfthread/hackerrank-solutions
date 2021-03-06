#include <bits/stdc++.h>

using namespace std;

int main () {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n, k;
    cin >> n >> k;
    int arr[n];
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int page = 1;
    int special = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 1; j < arr[i] + 1; j++) {
            if (j == page) {
                special++;
            }
            if (j % k == 0 || j == arr[i]) {
                page++;
            }
        }
    }
    cout << special << endl;
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}