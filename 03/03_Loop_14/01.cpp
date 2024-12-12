#include "bits/stdc++.h"
using namespace std;

int main() {
  string s1, s2;
  int x = 0;
  getline(cin, s1);
  getline(cin, s2);
  if (s1.length() == s2.length()) {
    for (int i = 0; i < s1.length(); i++) {
      if (s1[i] == s2[i])
        x++;
    }
    cout << x;
  } else
    cout << "Incomplete answer";

  return 0;
}
