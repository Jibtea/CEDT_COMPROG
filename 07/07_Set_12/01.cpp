#include <bits/stdc++.h>

using namespace std;

int main() {
  set<int> S_set;

  int a, n = 1;
  cin >> a;

  while (a != -1) {
    if (S_set.find(a) != S_set.end())
      break;
    S_set.insert(a);
    cin >> a;
    n++;
  }
  cout << n;
  return 0;
}
