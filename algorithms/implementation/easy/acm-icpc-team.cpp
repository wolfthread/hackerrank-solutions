#include <bits/stdc++.h>
#include <sstream>

using namespace std;

int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n, m;
    cin >> n >> m;
    int arrInt[n][m];
    int sums[n];
    for (int i = 0; i < n; i++) {
        string entry;
        cin >> entry;
        // converting to integers
        for (int j = 0; j < entry.length(); j++) {
            int currDigit = entry[j] - '0' ;
            arrInt[i][j] = currDigit;
        }
    }
    int countMax = 0;
    int countTeams = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i < j) {
                int currSum = 0;
                for (int k = 0; k < m; k++) {
                    currSum += arrInt[i][k] == 0 ? arrInt[i][k] + arrInt[j][k] : 1;
                }
                if (currSum > countMax) {
                    countMax = currSum;
                    countTeams = 1;
                } else if (currSum == countMax) {
                    countTeams++;
                }
            }
        }
    }
    cout << countMax << endl;
    cout << countTeams << endl;
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}

