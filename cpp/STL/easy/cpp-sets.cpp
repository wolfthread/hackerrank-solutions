#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <set>
#include <algorithm>
using namespace std;


int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int Q;
    cin >> Q;
    int x, y;
    set<int>s;
    for (int i = 0; i < Q; i++) {
        cin >> y >> x;
        set<int>::iterator itr=s.find(x);
        if (y == 1) {
            s.insert(x);
        } else if (y == 2) {
            if(itr != s.end()) {
                s.erase(x);    
            }
        } else {
            if (itr != s.end()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }
        }
    }
    //---------------------------------------------------------------------------------------
    // End Solution  
    return 0;
}



