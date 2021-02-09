#include<bits/stdc++.h>

using namespace std;
class Box {
    // Begin Solution
    //---------------------------------------------------------------------------------------
    public:
        Box() {
            length = 0;
            breadth = 0;
            height = 0;
        };
        Box(int l, int b, int h):length(l), breadth(b), height(h) {};
        Box(Box& box) {
            this->length = box.length;
            this->breadth = box.breadth;
            this->height = box.height;
        };
        int getLength() {
            return length;
        }
        int getBreadth() {
            return breadth;
        }
        int getHeight() {
            return height;
        }
        long long CalculateVolume() {
            return (long long) length * breadth * height;
        }
        friend bool operator<(Box& a, Box& b) {
            bool compare = false;
            if ((a.length < b.length) 
                || (a.breadth < b.breadth && a.length == b.length)
                || (a.height < b.height && a.breadth == b.breadth && a.length == b.length)){
                compare = true;
            }
            return compare;
        }
        friend ostream& operator<<(ostream& out, const Box& b) {
            out << b.length << " " << b.breadth << " " << b.height;
            return out;
        }        
    private:
        long length, breadth, height;
    //---------------------------------------------------------------------------------------
    // End Solution  
};



