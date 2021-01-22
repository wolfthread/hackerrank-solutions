using namespace std;

int main() {
  // Begin Solution
  //---------------------------------------------------------------------------------------
  map<string, int> m;
  int n;
  cin >> n;
  string name_to_store;
  int tel;
  for (int i = 0; i < n; i++) {
    cin >> name_to_store >> tel;
    m[name_to_store]=tel;
  }
  string name_to_check;
  while (cin >> name_to_check) {
    if (m.find(name_to_check) != m.end()){
      cout << name_to_check << "=" << m[name_to_check] << endl;
    } else {
      cout << "Not found" << endl;
    }
  }
  //---------------------------------------------------------------------------------------
  // End Solution

  return 0;
}