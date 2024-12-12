#include <iostream>

using namespace std;

int main() {
  int a, b, c, d, e, x;
  cin >> a >> b >> c >> d >> e;
  if (a > b) {
    x = a;
    a = b;
    b = x;
  }
  if (c > d) {
    x = c;
    c = d;
    d = x;
  }
  if (a > c) {
    x = b;
    b = d;
    d = x;
    c = a;
  }
  a = e;
  if (a > b) {
    x = a;
    a = b;
    b = x;
  }
  if (c > a) {
    x = b;
    b = d;
    d = x;
    a = c;
  }
  if (a > d)
    cout << d;
  else
    cout << a;

  return 0;
}
