#include <bits/stdc++.h>

using namespace std;

int main() {
  bool check = true;
  string s, ss;
  getline(cin, s);
  getline(cin, ss);
  multiset<char> sset, ssset;
  for (auto x : s) {
    if (x != ' ')
      sset.insert(tolower(x));
  }
  for (auto x : ss) {
    if (x != ' ')
      ssset.insert(tolower(x));
  }

  cout << ((sset == ssset) ? "YES" : "NO");
  return 0;
}
