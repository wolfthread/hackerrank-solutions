#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    vector<int> a(n);
    for(int a_i = 0; a_i < n; a_i++){
    	cin >> a[a_i];
    }
    int numberOfSwaps = 0;
    int endPosition = a.size() - 1;
    int swapPosition;
    while( endPosition > 0 ) {
        swapPosition = 0;
        for(int i = 0; i < endPosition; i++) {
            if( a[i] > a[i + 1] ){
                int tmp = a[i];
                a[i] = a[i + 1];
                a[i + 1] = tmp;
                numberOfSwaps += 1;
                swapPosition = i;
            }
        }
        endPosition = swapPosition;
    }
    cout << "Array is sorted in " << numberOfSwaps << " swaps." << endl;
    cout << "First Element: " << a[0] << endl;
    cout << "Last Element: " << a[a.size() - 1] << endl;
    return 0;
}