#include <bits/stdc++.h>
#include <list>

using namespace std;

int main()
{
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n;
    cin >> n;
    vector<int> v;
    for(int i = 0; i < n; i ++) {
        int entry;
        cin >> entry;
        v.push_back(entry);
    }
    do {
        sort(v.begin(), v.end());
        cout << v.size() << endl;
        int minimum = v[0];
        while (v[0] == minimum && v.size() > 0) {
            v.erase(v.begin());
        }
    } while (v.size() >= 1);
    
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution
}