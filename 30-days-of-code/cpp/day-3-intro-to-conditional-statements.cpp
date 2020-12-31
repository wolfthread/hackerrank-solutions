#include <bits/stdc++.h>

using namespace std;



int main()
{
    int N;
    cin >> N;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    string w = "Weird";
    string nw = "Not Weird";
    if (N % 2 != 0) {
        cout << w << endl;
    } else if (N >= 2 && N <= 5) {
        cout << nw << endl;
    } else if (N >= 6 && N <= 20) {
        cout << w << endl;
    } else {
        cout << nw << endl;
    }
    return 0;
}
