#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
struct Student {
    int age;
    int standard;
    string first_name;
    string last_name;
};
//---------------------------------------------------------------------------------------
// End Solution

int main() {
    Student st;
    
    cin >> st.age >> st.first_name >> st.last_name >> st.standard;
    cout << st.age << " " << st.first_name << " " << st.last_name << " " << st.standard;
    
    return 0;
}