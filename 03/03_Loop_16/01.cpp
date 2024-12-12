#include <iostream>

using namespace std;
int main() {
  int n, c = 0;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    for (int j = 1; j < n + i; j++) {
      if (i == n)
        cout << '*';
      else {
        if (j + i == n + i + c) {
          cout << '*';
          c++;
        } else if (i != 1 && j == n - (i - 1)) {
          cout << '*';
        } else
          cout << '.';
      }
    }
    if (i != n)
      cout << endl;
  }
  return 0;
}
