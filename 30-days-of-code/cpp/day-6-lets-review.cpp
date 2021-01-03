#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int nb_tests;
    cin >> nb_tests;
    for (int i=0; i<nb_tests; i++) {
        string my_string;
        string left_side;
        string right_side;
        cin >> my_string;
        for (int j=0; j<my_string.length();j++){
            if (j%2==0) {
                left_side += my_string[j];
            } else {
                right_side += my_string[j];
            };
        };
        cout << left_side << " " << right_side << endl;
    };
    return 0;
}
