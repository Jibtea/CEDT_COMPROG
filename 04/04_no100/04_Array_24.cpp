#include <iostream>

using namespace std;

int arr[50], arr0[50], o = 0;

int main() {
  int n, a, b;
  bool check = false, c = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a;
    arr[i] = a;
    arr0[i] = a;
  }
  int i;
  b = n;
  while (!check) {
    // n-=1;
    for (i = 0; i < n; i++) {
      if (arr[0] < arr[i]) {
        // cout<<endl;
        break;
      }
    }
    // cout<<n<<" "<<i<<" : ";

    if (i - 1 == 0)
      check = true;
    /////////////////
    if ((i == n || i == n - 1) && !c) {
      c = true;
      n -= 1;
      i -= 1;
    } else if (c & i <= n) {
      i -= 1;
      n = n - (n - i);
    }

    /////////////////
    a = 0;
    while (i >= 0) {
      arr[a] = arr0[i];
      i--;
      a++;
    }
    for (int j = 0; j < b; j++) {
      cout << arr0[j] << " ";
      arr0[j] = arr[j];
    }
    cout << endl;
    // check=true;
  }
  return 0;
}
