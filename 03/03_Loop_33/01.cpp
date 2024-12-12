#include <iostream>
#include <string>
#include "climits"

using namespace std;

int main() {
  int x[9999], y[9999];
  int cnt = 1;
  bool chk = false;
  int minn = INT_MAX;
  int maxx = INT_MIN;

  while (true) {
    int n;
    cin >> n;
    if (n == -999 || n == -998) {
      chk = n == -999 ? true : false;
      break;
    }
    x[cnt] = n;
    cin >> y[cnt];
    cnt++;
  }
  // cout << cnt;
  // cout << y[0];
  if (chk) {
    for (int i = 1; i <= cnt; i++) {
      maxx = max(maxx, i % 2 == 0 ? y[i] : x[i]);
      minn = min(minn, i % 2 == 0 ? x[i] : y[i]);
    }
  } else {
    for (int i = 1; i <= cnt; i++) {
      maxx = max(maxx, i % 2 == 0 ? x[i] : y[i]);
      minn = min(minn, i % 2 == 0 ? y[i] : x[i]);
    }
  }
  printf("%d %d", minn, maxx);

  return 0;
}
