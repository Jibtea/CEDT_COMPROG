#include <math.h>
#include <iostream>

using namespace std;

double n, sum = 0, i = 1;

int main() {
  cin >> n;
  sum += n;
  if (n == -1) {
    cout << "No Data";
  } else {
    while (n != -1) {
      cin >> n;
      if (n == -1)
        break;
      sum += n;
      i++;
    }
    // cout<<sum<<" "<<n<<" "<<i;
    cout << round((sum / i) * 100) / 100;
  }
  return 0;
}
