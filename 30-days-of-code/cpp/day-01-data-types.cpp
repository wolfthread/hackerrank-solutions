#include <iostream>
#include <iomanip>
#include <limits>

using namespace std;

int main() {
    int i = 4;
    double d = 4.0;
    string s = "HackerRank ";

    
    // Declare second integer, double, and String variables.
    int my_int;
    double my_double;
    string my_string;
    string buffer;
    // Read and save an integer, double, and String to your variables.
    // Note: If you have trouble reading the entire string, please go back and review the Tutorial closely.
    getline(cin, buffer);
    // converting string to integer
    my_int = stoi(buffer);
    getline(cin, buffer);
    // converting string to double
    my_double = stod(buffer);
    getline(cin, my_string);
    // Print the sum of both integer variables on a new line.
    cout << i + my_int << endl;
    // Print the sum of the double variables on a new line.
    cout << fixed << setprecision(1) << d + my_double << endl;
    // Concatenate and print the String variables on a new line
    cout << s + my_string << endl;
    // The 's' variable above should be printed first.

    return 0;
}