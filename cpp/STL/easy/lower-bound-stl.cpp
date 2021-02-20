#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n;
    cin >> n;
    int data[n];
    for (int i = 0; i < n; i ++) {
        cin >> data[i];
    }
    vector<int> v(data, data + n);
    sort (v.begin(), v.end());
    int q, q_i;
    cin >> q;
    for (int i = 0; i < q; i ++) {
        cin >> q_i;
        vector<int>::iterator low;
        low = lower_bound (v.begin(), v.end(), q_i);
        cout << ((v[low - v.begin()] == q_i) ? "Yes " : "No ") << (low - v.begin() + 1) << endl;
    }
    //---------------------------------------------------------------------------------------
    // End Solution
    return 0;
}
