#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;
  if (a <= 100)
    cout << 18;
  else if (a <= 250)
    cout << 22;
  else if (a <= 500)
    cout << 28;
  else if (a <= 1000)
    cout << 38;
  else if (a <= 2000)
    cout << 58;
  else
    cout << "Reject";

  return 0;
}
