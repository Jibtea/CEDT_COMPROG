#include <iostream>
using namespace std;
int main() {
  int h1, m1, s1, h2, m2, s2;
  cin >> h1 >> m1 >> s1;
  cin >> h2 >> m2 >> s2;
  int t1 = h1 * 60 * 60 + m1 * 60 + s1;
  int t2 = h2 * 60 * 60 + m2 * 60 + s2;
  /// out put answer
  int dh, dm, ds;
  if (t2 < t1)
    t2 += (24 * 60 * 60);
  ds = t2 - t1;
  dh = ds / (60 * 60);
  ds -= dh * 60 * 60;
  dm = ds / 60;
  ds -= dm * 60;
  cout << dh << ':' << dm << ':' << ds;
}