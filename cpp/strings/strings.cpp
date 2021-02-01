#include <iostream>
#include <string>
using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
void interChangeAndPrint(string s1, string s2);

int main() {
	string a, b;
    cin >> a >> b;
    int lenA, lenB;
    cout << a.size() << " " << b.size() << endl;
    cout << a + b << endl;
    interChangeAndPrint(a, b);
    interChangeAndPrint(b, a);
    return 0;
}

void interChangeAndPrint(string s1, string s2) {
    for (int i = 0; i < s1.size(); i++) {
        if (i == 0) {
            cout << s2[0];
        } else {
            cout << s1[i];
        }
    }
    cout << " ";
}
//---------------------------------------------------------------------------------------
// End Solution