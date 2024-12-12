#include <bits/stdc++.h>

using namespace std;

double arr[50], arr_sum[50], arr_ans[50];
int main() {
  double n, a, b, xx;
  int x = 0;
  cin >> n;
  x = n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  xx = arr[x - 1];
  x -= 1;
  for (int i = n - 1; i >= 0; i--) {
    for (int j = x; j >= 0; j--) {
      a = xx;
      xx = arr[j - 1] + 1 / xx;
    }
    x--;
    xx = arr[x];
    arr_ans[i] = a;
  }

  for (int i = 0; i < n; i++) {
    cout << setprecision(10) << arr_ans[i] << endl;
  }

  return 0;
}
/*


*/
