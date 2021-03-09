#include <bits/stdc++.h>

using namespace std;

int main() {
// Begin Solution
//---------------------------------------------------------------------------------------
    int n, m;
    cin >> n >> m;
    if (n == m) {
        cout << 0 << endl;
    }
    else {
        int stations[m];
        for (int i = 0; i < m; i++) {
            cin >> stations[i];
        }
        sort(stations, stations + m);
        int maxDistance = stations[0];
        for (int i = 0; i < m - 1; i++) {
            int distance = (stations[i + 1] - stations[i]) / 2;
            if (distance > maxDistance) {
                maxDistance = distance;
            }
        }
        if (n - stations[m - 1] > maxDistance) {
            maxDistance = n - stations[m - 1] - 1;
        }
        cout << maxDistance << endl;
    }
    return 0;
//---------------------------------------------------------------------------------------
// End Solution
}