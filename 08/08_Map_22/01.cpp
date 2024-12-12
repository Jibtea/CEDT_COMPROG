#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, float> mmap;
  mmap["THB"] = 1;
  int n;
  string s, ss;
  float f;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> f;
    mmap[s] = f;
  }
  cin >> n >> s;
  ss = s;
  cout << n << " " << s;
  while (cin >> s) {
    n = (mmap[ss] * n / mmap[s]);
    cout << " -> " << n << " " << s;
    ss = s;
  }
  return 0;
}

/**
5
USD 35.3065
GBP 45.4770
EUR 38.8626
JPY 0.0025
HKD 4.5309
1000 THB USD EUR JPY THB
1000 THB -> 28 USD -> 25 EUR -> 388626 JPY -> 971 THB
 */
