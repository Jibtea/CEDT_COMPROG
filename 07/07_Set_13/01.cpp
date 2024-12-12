#include <bits/stdc++.h>
using namespace std;
int main() {
  set<string> swin, slose;
  string s, ss;
  bool have = false;
  while (cin >> s >> ss) {
    swin.insert(s);
    slose.insert(ss);
  }
  // cout<<"0";
  for (auto it = swin.begin(); it != swin.end(); it++) {
    if (slose.find(*it) == slose.end()) {
      cout << *it << " ";
      have = true;
    }
  }
  if (!have)
    cout << "None";
  return 0;
}
