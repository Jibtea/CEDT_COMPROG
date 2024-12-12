#include <bits/stdc++.h>

using namespace std;

int main() {
  string a;
  cin >> a;
  if (a.length() == 10 && a[0] == '0' &&
      (a[1] == '6' || a[1] == '8' || a[1] == '9'))
    cout << "Mobile number";
  else
    cout << "Not a mobile number";
}
