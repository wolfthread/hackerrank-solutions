#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


class Triangle{
    public:
    	void triangle(){
     		cout<<"I am a triangle\n";
    	}
};

class Isosceles : public Triangle{
    public:
    	void isosceles(){
    		cout<<"I am an isosceles triangle\n";
    	}
      // Begin Solution
      //---------------------------------------------------------------------------------------
  		void description(){
            cout << "In an isosceles triangle two sides are equal\n";
        }
      //---------------------------------------------------------------------------------------
      // End Solution      
};

int main(){
    Isosceles isc;
    isc.isosceles();
  	isc.description();
    isc.triangle();
    return 0;
}