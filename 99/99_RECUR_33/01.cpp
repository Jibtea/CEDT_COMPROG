#include <bits/stdc++.h>
using namespace std;

int search(int b, int c, vector<pair<int, int>> v) {
  for (int i = 0; i < v.size(); i++) {
    if (v[i].first == b && v[i].second == c) {
      return 108;
    } else if (v[i].first == b) {
      b = v[i].second;
      return search(b, c, v);
    } else if (v[i].first != b && i == v.size() - 1) {
      for (int j = 0; j < v.size(); j++) {
        if (v[j].second == b) {
          int x, y;
          x = v[j].first;
          y = v[j].second;
          v[j] = {INT_MAX, INT_MAX};
          return search(x, c, v);
        } else if (v[j].second != b && j == v.size() - 1)
          return 107;
      }
    }
  }
}

int main() {
  int a, b, c, d, e;
  vector<pair<int, int>> v;
  vector<bool> vb;
  cin >> a >> b >> c;
  for (int i = 0; i < a; i++) {
    cin >> d >> e;
    v.push_back({d, e});
    vb.push_back(false);
  }

  e = search(b, c, v);
  if (e == 108)
    cout << "yes";
  else
    cout << "no";

  return 0;
}

/*
string dec2bin(int d) {
 if (d < 2) return (d == 0 ? "0" : "1");
 return dec2bin(d/2) + dec2bin(d%2);
}
m[1]="1"; m[2]="2"; m[3]="3"; m[4]="4"; m[5]="5";
m[6]="6"; m[7]="7"; m[8]="8"; m[9]="9"; m[10]="A"; m[11]="B";
m[12]="C"; m[13]="D"; m[14]="E"; m[15]="F";
*/
