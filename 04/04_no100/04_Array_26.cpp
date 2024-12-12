#include <iostream>

using namespace std;
int arr[50][50], arr0[50], arr_s[50][50], sum = 0;
int main() {
  int m, a, x = 0, y, r;
  cin >> m;
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      cin >> a;
      arr[i][j] = a;
      if (a != 0) {
        arr0[x] = a;
        x++;
      } else
        r = i;
    }
  }
  y = x - 1;
  x = 0;
  //////////////////cout<<arr0[6];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < m; j++) {
      for (int k = x; k < y; k++) {
        if (arr[i][j] != 0) {
          if (arr[i][j] > arr0[k]) {
            sum++;
          }
        }
      }
      x++;
    }
  }
  // cout<<sum;
  if (m % 2 != 0 && sum % 2 == 0)
    cout << "YES";
  else if (m % 2 == 0) {
    if ((sum % 2 != 0) && (r % 2 == 0))
      cout << "YES";
    else if ((sum % 2 == 0) && (r % 2 != 0))
      cout << "YES";
    else
      cout << "NO";
  } else
    cout << "NO";

  return 0;
}
