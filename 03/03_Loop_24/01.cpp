#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int j = 0;
  cin >> s;
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      j++;
      while (s[i] == s[i + j]) {
        j++;
      }
      cout << s[i] << " " << j << " ";
      i += j - 1;
      j = 0;

    } else {
      cout << s[i] << " " << 1 << " ";
    }
  }
  return 0;
}
