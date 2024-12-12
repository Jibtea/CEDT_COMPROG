#include <cmath>
#include <iostream>

using namespace std;

float arr[100][100];
int main() {
  int n, m;
  double a, b, c, sum;
  cin >> n >> m;
  for (int i = 0; i < n; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a;
      arr[i][j] = a;
    }
  }
  n -= 1;
  m -= 1;
  for (int i = 1; i < n; i++) {
    for (int j = 1; j < m; j++) {
      a = arr[i - 1][j - 1] + arr[i - 1][j] + arr[i - 1][j + 1];
      b = arr[i][j - 1] + arr[i][j] + arr[i][j + 1];
      c = arr[i + 1][j - 1] + arr[i + 1][j] + arr[i + 1][j + 1];
      sum = (a + b + c) / 9;
      cout << round(sum * 100) / 100.0 << " ";
    }
    cout << endl;
  }

  return 0;
}
