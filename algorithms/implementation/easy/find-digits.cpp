#include <bits/stdc++.h>
using namespace std;

int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int t, n;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int count = 0;
        cin >> n;
        int nb = n;
        while (n >= 1)
        {
            char currDigit = n % 10;
            if (currDigit != 0 && nb % currDigit == 0)
            {
                count++;
            }
            n /= 10;
        }
        cout << count << endl;
    }
    return 0;
    //---------------------------------------------------------------------------------------
    // End Solution  
}