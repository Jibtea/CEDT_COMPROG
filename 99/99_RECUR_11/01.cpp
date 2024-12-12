#include <bits/stdc++.h>
using namespace std;

string dec2hex(int d) {
  map<int, string> m;
  m[0] = "0";
  m[1] = "1";
  m[2] = "2";
  m[3] = "3";
  m[4] = "4";
  m[5] = "5";
  m[6] = "6";
  m[7] = "7";
  m[8] = "8";
  m[9] = "9";
  m[10] = "A";
  m[11] = "B";
  m[12] = "C";
  m[13] = "D";
  m[14] = "E";
  m[15] = "F";
  if (d < 16)
    return m[d];
  return dec2hex(d / 16) + dec2hex(d % 16);
}
int main() {
  int d;
  while (cin >> d) {
    cout << d << " -> " << dec2hex(d) << endl;
  }
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
