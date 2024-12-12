#include <iostream>

using namespace std;

int main() {
  string country[100], s, ss_1 = "00", ss_2 = "00", place[100];
  int n, arr[100], m, sum = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s;
    country[i] = s;
    cin >> m;
    arr[i] = m;
  }
  // cout<<arr[0]<<endl;
  m = 0;
  while (cin >> s) {
    ss_1[0] = s[4];
    ss_1[1] = s[5];
    // cout<<ss_1<<" ";
    for (int i = 0; i < n; i++) {
      if (ss_1 == country[i] && ss_1 != ss_2 && m != 0) {
        sum += arr[i];
      }
    }
    ss_2 = ss_1;
    m++;
  }
  // cout<<endl;

  cout << sum;

  return 0;
}
/*
while (cin>>s)
    {
        ss[0]=s[4];ss[1]=s[5];
        cout<<ss<<" ";
    }

*/
