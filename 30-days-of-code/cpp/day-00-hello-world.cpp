#include <iostream>
using namespace std;

int main() {
    // Declare a variable named 'input_string' to hold our input.
    string input_string; 
    
    // Read a full line of input from stdin (cin) and save it to our variable, input_string.
    getline(cin, input_string); 
    
    // Print a string literal saying "Hello, World." to stdout using cout.
    cout << "Hello, World." << endl;

    // Begin Solution
    //---------------------------------------------------------------------------------------
    cout << input_string << endl;
    //---------------------------------------------------------------------------------------
    // End Solution

    return 0;
}
