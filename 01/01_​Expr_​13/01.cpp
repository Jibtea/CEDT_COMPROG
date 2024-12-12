#include <cmath>
#include <iostream>

using namespace std;
int main() {
  double a, b, c, y;
  cin >> a >> b >> c;
  y = (sqrt(pow(b, 2) - (4 * a * c)));
  // cout<<((-b)-y)/(2*a);
  // cout<<((-b)+y)/(2*a);
  cout << round(((-b) - y) / (2 * a) * 1e3) / 1e3 << " ";
  cout << round(((-b) + y) / (2 * a) * 1e3) / 1e3;
}