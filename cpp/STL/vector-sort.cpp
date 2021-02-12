#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    vector<int>v;
    int size;
    cin >> size;
    int val;
    for(int i = 0; i < size; i++) {
        cin >> val;
        v.push_back(val);
    }
    sort(v.begin(),v.end());
    for(int i = 0; i < size; i++) {
        cout << v[i] << " ";
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution
}
