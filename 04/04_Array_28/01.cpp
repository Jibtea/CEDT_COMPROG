#include <bits/stdc++.h>

using namespace std;

int main() {
  string s;
  char a, arr_input[100],
      arr_a[26] = {'a', 'b', 'c', 'd', 'e', 'f', 'g', 'h', 'i',
                   'j', 'k', 'l', 'm', 'n', 'o', 'p', 'q', 'r',
                   's', 't', 'u', 'v', 'w', 'x', 'y', 'z'};
  int arr[26];
  getline(cin, s);

  for (int i = 0; i < 26; i++) {
    arr[i] = 0;
  }
  for (int i = 0; i < s.length(); i++) {
    a = tolower(s[i]);
    arr_input[i] = a;
  }

  for (int i = 0; i < s.length(); i++) {
    for (int j = 0; j < 26; j++) {
      if (arr_a[j] == arr_input[i])
        arr[j] = arr[j] + 1;
    }
  }

  for (int i = 0; i < 26; i++) {
    if (arr[i] > 0)
      cout << arr_a[i] << " -> " << arr[i] << endl;
  }

  return 0;
}
