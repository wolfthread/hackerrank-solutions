#include <iostream>

using namespace std;


int main(){
    string S;
    cin >> S;
    try {
        int converted = stoi(S);
        cout << S << endl;
    } catch(invalid_argument e) {
        cout << "Bad String" << endl;
    }
    return 0;
}