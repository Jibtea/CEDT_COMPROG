#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, arr[100] = {10000}, sum;
  cin >> n;
  for (int i = 1; i <= n; i++) {
    cin >> sum;
    arr[i] = sum;
  }
  sum = 0;

  for (int i = 1; i <= n; i++) {
    if (arr[i] > arr[i - 1] && arr[i] > arr[i + 1] && i + 1 <= n)
      sum++;
    // else cout<<"Out"<<endl;
  }

  cout << sum;
  return 0;
}
