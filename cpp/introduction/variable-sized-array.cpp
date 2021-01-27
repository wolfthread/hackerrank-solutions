#include <iostream>
#include <vector>
using namespace std;

int main() {
    int n, Q, k;
    cin >> n >> Q;
    vector<vector<int>> a;
    for (int i = 0; i < n; i++) {
        cin >> k;
        vector<int> k_i;
        int k_i_j;
        for (int j = 0; j < k; j++) {
            cin >> k_i_j;
            k_i.push_back(k_i_j);
        }
        a.push_back(k_i);
    }
    for (int q = 0; q < Q; q++) {
        int q_a, q_k_a;
        cin >> q_a >> q_k_a;
        cout << a[q_a][q_k_a] << endl;
    }
    return 0;
}
