#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>

using namespace std;

class Difference {
    private:
    vector<int> elements;
  
  	public:
  	int maximumDifference;

    // Begin Solution
    //---------------------------------------------------------------------------------------
    Difference(vector<int> elements) {
        this->elements = elements;
    }

    void computeDifference() {
        int maxAbsolute = 0;
        int currDiff;
        for (int i = 0; i < this->elements.size(); i++) {
            for(int j = 0; j < this->elements.size(); j++) {
                currDiff = abs(elements[i] - elements[j]);
                if (currDiff > maxAbsolute) {
                    maxAbsolute = currDiff;
                }
            }
        }
        maximumDifference = maxAbsolute;
    }
    //---------------------------------------------------------------------------------------
    // End Solution
    
};

int main() {
    int N;
    cin >> N;
    
    vector<int> a;
    
    for (int i = 0; i < N; i++) {
        int e;
        cin >> e;
        
        a.push_back(e);
    }
    
    Difference d(a);
    
    d.computeDifference();
    
    cout << d.maximumDifference;
    
    return 0;
}