#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    int dayIn, monthIn, yearIn, dayOut, monthOut, yearOut;
    cin >> dayIn >> monthIn >> yearIn;
    cin >> dayOut >> monthOut >> yearOut;
    int fineDay = 15;
    int fineMonth = 500;
    int fineYear = 10000;
    if (yearIn == yearOut) {
        if (monthIn == monthOut) {
            if (dayIn > dayOut) {
                cout << (dayIn - dayOut) * fineDay;
            } else {
                cout << 0;
            }
        } else if (monthIn > monthOut) {
            cout << (monthIn - monthOut) * fineMonth;
        } else {
            cout << 0;
        }
    } else if (yearIn > yearOut) {
        cout << fineYear;
    } else {
        cout << 0;
    }
    //---------------------------------------------------------------------------------------
    // End Solution  
    return 0;
}
