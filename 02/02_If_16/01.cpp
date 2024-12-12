#include <bits/stdc++.h>

using namespace std;

int main() {
  int a;
  cin >> a;
  if (a < 0)
    cout << "negative" << endl;
  else if (a == 0)
    cout << "zero" << endl;
  else
    cout << "positive" << endl;

  if (a % 2 == 0)
    cout << "even";
  else
    cout << "odd";
}
