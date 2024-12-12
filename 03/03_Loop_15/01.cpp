#include <iostream>

using namespace std;

int main() {
  string s;
  getline(cin, s);
  for (int i = 0; i < s.length(); i++) {
    if (s[i] == '(')
      cout << '[';
    else if (s[i] == '[')
      cout << '(';
    else if (s[i] == ')')
      cout << ']';
    else if (s[i] == ']')
      cout << ')';
    else
      cout << s[i];
  }

  return 0;
}
