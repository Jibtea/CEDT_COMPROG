#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<int> v;
  int n, sum;
  cin >> n;
  v.push_back(n);
  while (n != 1) {
    if (n % 2 == 0) {
      n = n / 2;
    } else {
      n = 3 * n + 1;
    }
    v.push_back(n);
  }

  sum = v.size();
  if (sum > 15)
    sum = sum - 15;
  else {
    sum = 1;
    cout << v[0] << "->";
  }
  // cout<<v[0];
  for (int i = sum; i < v.size() - 1; i++) {
    cout << v[i] << "->";
  }
  cout << v[v.size() - 1];

  return 0;
}

/*
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
*/
