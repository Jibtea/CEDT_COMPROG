#include <cmath>
#include <iostream>

using namespace std;

int main() {
  int i = 1, x = 1;
  while (i != 11) {
    x = x * i;
    i++;
  }
  double y;
  y = (7 / sqrt(71) - sin((40 * M_PI / 180)));  // 0.6984
  cout << (M_PI - (x / pow(8, 8)) + (pow(log(9.7), y))) / (pow(1.2, cbrt(2.3)));
}
