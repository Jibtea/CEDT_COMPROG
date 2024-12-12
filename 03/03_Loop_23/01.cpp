#include <iostream>

using namespace std;

int main() {
  string s;
  int n, c = 0;
  getline(cin, s);
  cin >> n;

  for (int i = 0; i < s.length(); i++) {
    if (s[i] == s[i + 1]) {
      for (int j = 0; j < s.length(); j++) {
        if (s[i] == s[j + i])
          c++;
        else {
          if (c < n) {
            for (int k = 0; k < c; k++) {
              cout << s[i + k];
            }
          } else {
          }
          i += c - 1;
          c = 0;
          break;
        }
      }

    } else
      cout << s[i];
  }

  return 0;
}
