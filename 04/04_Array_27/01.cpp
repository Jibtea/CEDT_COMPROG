#include <bits/stdc++.h>

using namespace std;

int main() {
  int arr_x[100], arr_y[100], n, b, a, min_1 = 1000, max_1 = -1000,
                                       min_2 = 1000, max_2 = -1000;
  string s;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    cin >> b;
    arr_x[i] = a;
    arr_y[i] = b;
  }
  // cout<<arr_y[y-1];
  cin >> s;  // x=0; y=0;
  for (int i = 0; i < n; i++) {
    // cout<<i;
    if (i % 2 == 0) {
      if (min_1 > arr_x[i])
        min_1 = arr_x[i];
      if (max_2 < arr_x[i])
        max_2 = arr_x[i];
      /////red line/////
      // cout<<" x :"<<arr_x[i]<<endl;
      if (min_2 > arr_y[i])
        min_2 = arr_y[i];
      if (max_1 < arr_y[i])
        max_1 = arr_y[i];
    } else if (i % 2 != 0) {
      if (min_1 > arr_y[i])
        min_1 = arr_y[i];
      if (max_2 < arr_y[i])
        max_2 = arr_y[i];
      /////red line/////
      // cout<<" y :"<<arr_y[i]<<endl;
      if (min_2 > arr_x[i])
        min_2 = arr_x[i];
      if (max_1 < arr_x[i])
        max_1 = arr_x[i];
    }
  }
  if (s == "Zig-Zag")
    cout << min_1 << " " << max_1;
  else if (s == "Zag-Zig")
    cout << min_2 << " " << max_2;

  return 0;
}
