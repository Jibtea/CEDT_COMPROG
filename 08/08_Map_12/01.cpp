#include <bits/stdc++.h>

using namespace std;

int main() {
  int n;
  map<string, string> fn_m, nn_m;
  string s, ss, tel;
  bool cc = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> ss >> tel;
    s += " " + ss;
    fn_m[tel] = s;
    nn_m[s] = tel;
  }
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    if (fn_m.find(s) != fn_m.end()) {
      cout << s << " --> " << fn_m[s] << endl;
      cc = true;
    } else if (nn_m.find(s) != nn_m.end()) {
      cout << s << " --> " << nn_m[s] << endl;
      cc = true;
    }
    if (!cc)
      cout << s << " --> " << "Not found" << endl;

    cc = false;
  }
  return 0;
}

/*
5
Anthony Stark 086-111-1111
Henry Pym 087-222-2222
Robert Banner 088-333-3333
Steven Rogers 089-444-4444
Natasha Romanoff 091-555-5555
4
087-222-2222
Steven Rogers
Monica Rambeau
911


*/
