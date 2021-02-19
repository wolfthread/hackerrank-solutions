#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n, q;
    vector<int>v;
    cin >> n;
    for (int i = 0; i < n; i ++) {
        int entry;
        cin >> entry;
        v.push_back(entry);
    }
    int x, a, b;
    cin >> x;
    // removing first element x
    v.erase (v.begin() + x - 1);
    cin >> a >> b;
    // removing the range a - b
    v.erase (v.begin() + a - 1, v.begin() + b - 1);
    cout << v.size() << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    //---------------------------------------------------------------------------------------
    // End Solution  
    return 0;
}
