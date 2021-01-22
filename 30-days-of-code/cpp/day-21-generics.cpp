#include <iostream>
#include <vector>
#include <string>

using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
template<typename T>
void printArray(vector<T> myArray) {
    for (int i = 0; i < myArray.size(); i++) {
        cout << myArray[i] << endl;
    }
}
//---------------------------------------------------------------------------------------
// End Solution

int main() {
	int n;
	
	cin >> n;
	vector<int> int_vector(n);
	for (int i = 0; i < n; i++) {
		int value;
		cin >> value;
		int_vector[i] = value;
	}
	
	cin >> n;
	vector<string> string_vector(n);
	for (int i = 0; i < n; i++) {
		string value;
		cin >> value;
		string_vector[i] = value;
	}

	printArray<int>(int_vector);
	printArray<string>(string_vector);

	return 0;
}