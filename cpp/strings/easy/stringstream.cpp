#include <sstream>
#include <vector>
#include <iostream>
using namespace std;

vector<int> parseInts(string str) {
  // Begin Solution
  //---------------------------------------------------------------------------------------
  vector<int> parsedInts;
	char ch;
    stringstream ss(str);
    while(ss) {
        int a;
        ss >> a;
        parsedInts.push_back(a);
        ss >> ch;
    }
    return parsedInts;
  //---------------------------------------------------------------------------------------
  // End Solution
}

int main() {
    string str;
    cin >> str;
    vector<int> integers = parseInts(str);
    for(int i = 0; i < integers.size(); i++) {
        cout << integers[i] << "\n";
    }
    
    return 0;
}