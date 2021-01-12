#include <bits/stdc++.h>

using namespace std;

int main() {
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    int current_count = 0;
    int max_count = 0;
    for(int i=0; n>0; i++) {    
        if(n%2 == 1){
            current_count++;
        } else {
            current_count = 0;
        }
        if(current_count > max_count){
            max_count = current_count;
        };
        n = n/2;
    };
    cout << max_count << endl;
     
    return 0;
}
