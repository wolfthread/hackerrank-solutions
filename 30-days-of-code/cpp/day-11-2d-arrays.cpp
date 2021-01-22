#include <bits/stdc++.h>

using namespace std;

int main() {
    vector<vector<int>> arr(6);
    for (int i = 0; i < 6; i++) {
        arr[i].resize(6);

        for (int j = 0; j < 6; j++) {
            cin >> arr[i][j];
        };

        cin.ignore(numeric_limits<streamsize>::max(), '\n');
    }
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int max_sum = -63;

    // moving hourglass from left to right, then top to bottom
    for (int move_ver = 0; move_ver < 4; move_ver ++) {
        for (int move_hor = 0; move_hor < 4; move_hor ++) {
            int sum = 0;
            // adding a counter check since 4th entry and 6th entry not counted
            int counter = 1;
            for (int i = 0; i < 3; i++) {
                for (int j = 0; j < 3; j++) {
                    if (counter != 4 && counter != 6){
                        sum += arr[i + move_ver][j + move_hor];
                    }
                    counter += 1;
                };
            };
            if (sum > max_sum) {
                max_sum = sum;
            };
        };
    };
    cout << max_sum << endl;
    //---------------------------------------------------------------------------------------
    // End Solution

    return 0;
}
