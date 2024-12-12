#include <bits/stdc++.h>

using namespace std;

int f(int a, int k, int m) {
  // int sum=;
  // cout<<k<<endl;
  if (k == 0)
    return 1;
  else if (k % 2 == 0)
    return (int)pow(f(a, k / 2, m), 2) % m;
  else if (k % 2 != 0)
    return a * ((int)pow(f(a, k / 2, m), 2)) % m;
  return -1;
}
int main() {
  int a, k, m;
  cin >> a >> k >> m;
  cout << f(a, k, m);

  return 0;
}
