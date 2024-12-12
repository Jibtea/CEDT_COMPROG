#include <bits/stdc++.h>

using namespace std;
// 30 4 6 9  11 : 31 1 3 5 7 8 10 12 : 2
int main() {
  int d, m, y, n;
  cin >> d >> m >> y;
  y -= 543;
  if (m == 4 || m == 6 || m == 9 || m == 11) {
    d += 15;
    n = 30;
    if (d > n) {
      m++;
      d -= 30;
    }

  } else if (m == 2) {
    if (y % 400 == 0) {
      n = 29;
      d += 15;
      if (d > n) {
        d -= n;
        m++;
      }
    } else if (y % 4 == 0 && y % 100 != 0) {
      n = 29;
      d += 15;
      if (d > n) {
        d -= n;
        m++;
      }
    } else {
      n = 28;
      d += 15;
      if (d > n) {
        d -= n;
        m++;
      }
    }
  } else {
    n = 31;
    d += 15;
    if (m == 12 && d > n) {
      y++;
      m = 1;
      d -= 31;
    } else {
      if (d > n) {
        d -= n;
        m++;
      }
    }
  }

  cout << d << "/" << m << "/" << y + 543;

  return 0;
}
