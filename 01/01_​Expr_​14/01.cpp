#include <bits/stdc++.h>

using namespace std;

int main() {
  int y;
  cin >> y;
  y -= 543;
  y %= 100;
  // cout<<y;
  cout << (y + (abs(y / 4)) + 11) % 7;
}