#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  int n;
  cin >> s;
  n = s.length();
  for (int i = 0; i < n; i++) {
    cout << s[i];
    if (int(s[i + 1]) >= 'A' && int(s[i + 1]) <= 'Z')
      cout << ", ";
    if (int(s[i + 1]) >= '0' && int(s[i + 1]) <= '9') {
      if (int(s[i]) >= '0' && int(s[i]) <= '9') {
        // cout<<", ";
        for (int j = i + 1; j < n; j++) {
          if (int(s[i + 1]) >= '0' && int(s[i + 1]) <= '9') {
            i++;
            cout << s[i];
          } else {
            if (i < n) {
              cout << ", ";
            }
            break;
          }
        }
      } else {
        cout << ", ";
        for (int j = i + 1; j < n; j++) {
          if (int(s[i + 1]) >= '0' && int(s[i + 1]) <= '9') {
            i++;
            cout << s[i];
          } else {
            if (i < n) {
              cout << ", ";
            }
            break;
          }
        }
      }
    }
  }

  return 0;
}
