#include <bits/stdc++.h>

using namespace std;

int main()
{
    // Begin Solution
    //---------------------------------------------------------------------------------------
    long int n, k, q;
    cin >> n >> k >> q;
    long arr[n];
    long queries[q];
    long rotated[n];
    for (int i = 0; i < n ; i++) {
        cin >> arr[i];
    }
    for (int i = 0; i < q; i++) {
        cin >> queries[i];
    }
    for (int i = 0; i < n; i ++) {
        rotated[(i + k) % n] = arr[i]; //  modulo solution
    }
    for (int i = 0 ; i < q; i ++) {
        cout << rotated[queries[i]] << endl;
    }
    //---------------------------------------------------------------------------------------
    // End Solution
}
