#include <bits/stdc++.h>

using namespace std;

int factorial(int n) {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    if (n == 1) {
        return 1;
    } else {
        return factorial(n-1) * n;
    };
    //---------------------------------------------------------------------------------------
    // End Solution
}

int main() {
    ofstream fout(getenv("OUTPUT_PATH"));

    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    int result = factorial(n);

    fout << result << "\n";

    fout.close();

    return 0;
}
