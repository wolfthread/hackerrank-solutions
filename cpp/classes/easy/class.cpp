#include <iostream>
#include <sstream>
using namespace std;

// Begin Solution
//---------------------------------------------------------------------------------------
class Student {
    private:
        int age, standard;
        string first_name, last_name;
    public:
        // setters
        void set_age(int a) {
            this->age = a;
        }
        void set_first_name(string first) {
            this->first_name = first;
        }
        void set_last_name(string last) {
            this->last_name = last;
        }
        void set_standard(int s) {
            this->standard = s;
        }

        // getters
        int get_age() {
            return this->age;
        }
        string get_first_name() {
            return this->first_name;
        }
        string get_last_name() {
            return this->last_name;
        }
        int get_standard() {
            return this->standard;
        }
        string to_string() {
            ostringstream oss;
            oss << this->age << "," << this->first_name << "," << this->last_name << "," << this->standard << "\n";
            return oss.str();
        }

};
//---------------------------------------------------------------------------------------
// End Solution
    
int main() {
    int age, standard;
    string first_name, last_name;
    
    cin >> age >> first_name >> last_name >> standard;
    
    Student st;
    st.set_age(age);
    st.set_standard(standard);
    st.set_first_name(first_name);
    st.set_last_name(last_name);
    
    cout << st.get_age() << "\n";
    cout << st.get_last_name() << ", " << st.get_first_name() << "\n";
    cout << st.get_standard() << "\n";
    cout << "\n";
    cout << st.to_string();
    
    return 0;
}