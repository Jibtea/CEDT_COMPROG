#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  map<string, string> fn_m, nn_m;
  string s, ss;
  bool cc = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> ss;
    fn_m[s] = ss;
    nn_m[ss] = s;
  }
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    if (fn_m.find(s) != fn_m.end()) {
      cout << fn_m[s] << endl;
      cc = true;
    } else if (nn_m.find(s) != nn_m.end()) {
      cout << nn_m[s] << endl;
      cc = true;
    }
    if (!cc)
      cout << "Not found" << endl;

    cc = false;
  }
  return 0;
}
