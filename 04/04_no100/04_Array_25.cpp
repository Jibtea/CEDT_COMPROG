#include <bits/stdc++.h>

using namespace std;
int main() {
  int n, arr[50], sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> arr[i];
  }
  int i = 0, j = 1;
  while (i < n - 1 && j < n - 1) {
    if (arr[i] > arr[j]) {
      sum += (arr[i] - arr[j]);
      // cout<<arr[i]<<" : "<<arr[j]<<" "<<arr[i]-arr[j]<<endl;
      j++;

    } else {
      i = j;
      j++;
    }
  }
  cout << sum;

  return 0;
}
