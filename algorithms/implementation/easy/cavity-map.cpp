#include <bits/stdc++.h>

using namespace std;

int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int n;
    cin >> n;
    int grid[n][n];
    for (int i = 0; i < n; i ++) {
        string line;
        cin >> line;
        for(int j = 0; j < n; j ++) {
            grid[i][j] = line[j] - '0';
        }
    }
    for(int i = 0; i < n - 2; i ++) {
        for(int j = 0; j < n -2; j ++) { 
            int center = grid[i + 1][j + 1];
            int top = grid[i][j + 1];
            int bottom = grid[i + 2][j + 1];
            int left = grid[i + 1][j];
            int right = grid[i + 1][j + 2];
            if (center > top 
            && center > bottom 
            && center > left 
            && center > right 
            && top != -1 
            && bottom != -1 
            && left != -1 
            && right != -1) {
                grid[i + 1][j + 1] = -1;
            }
        }
    }
    for(int i = 0; i < n; i ++) {
        for(int j = 0; j < n; j ++) { 
            if (grid[i][j] == -1) {
                cout << "X";
            } else {
                cout << grid[i][j];
            }
        }
        cout << endl;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}