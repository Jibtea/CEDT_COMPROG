#include <bits/stdc++.h>

using namespace std;

int main() {
  double xe, ye, re, rp, xm, ym, A, B, C, r_dif, a, b;
  cin >> xe >> ye >> re >> rp >> xm >> ym;
  A = xm - xe;
  B = ym - ye;
  C = sqrt(A * A + B * B);
  r_dif = (re - rp) / C;
  a = A * r_dif;
  b = B * r_dif;

  cout << round(a + xe) << " " << round(b + xe);

  return 0;
}