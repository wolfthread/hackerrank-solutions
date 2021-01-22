#include <cmath>
#include <iostream>
#include <exception>
#include <stdexcept>
using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
struct NegativeException : public exception {
    NegativeException () {}
    const char * what() const throw() {
        return "n and p should be non-negative";
    }
};

class Calculator {
    public:
        int power(int a, int b) {
            if (a < 0 || b < 0) {
                throw NegativeException();
            } else {
                return pow(a, b);
            }
        }
};
//---------------------------------------------------------------------------------------
// End Solution


int main() {
    Calculator myCalculator=Calculator();
    int T,n,p;
    cin>>T;
    while(T-->0){
      if(scanf("%d %d",&n,&p)==2){
         try{
               int ans=myCalculator.power(n,p);
               cout<<ans<<endl; 
         }
         catch(exception& e){
             cout<<e.what()<<endl;
         }
      }
    }
    
}