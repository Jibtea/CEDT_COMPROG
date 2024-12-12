#include <bits/stdc++.h>

using namespace std;

int main() {
  string s = "", ss;
  double n;
  int sum = 0, count = 0;
  vector<tuple<double, string, double>> v;
  vector<string> vv;
  while (s != "END") {
    cin >> s;
    if (s != "END") {
      cin >> n;
      v.push_back(make_tuple(0, s, n));
      count++;
    } else {
      while (cin >> ss) {
        vv.push_back(ss);
        sum++;
      }
    }
  }

  // cout<<sum;
  bool check_nosale = true;
  for (int i = 0; i < sum; i++) {
    for (int j = 0; j < count; j++) {
      // cout<<"NEWJA ";
      if (vv[i] == get<1>(v[j])) {
        n = get<0>(v[j]);
        get<0>(v[j]) = n + 1;
        // cout<<get<1>(v[j])<<" ";
        break;
      }
    }
  }

  for (int i = 0; i < count; i++) {
    if (get<0>(v[i]) != 0) {
      get<0>(v[i]) = get<0>(v[i]) * get<2>(v[i]);
      check_nosale = false;
      // cout<<get<0>(v[i])<<" ";
    }
  }
  // cout<<"NEWJA ";
  sort(v.begin(), v.end(), greater<tuple<double, string, double>>());
  // cout<<get<0>(v[0])<<" ";

  if (check_nosale)
    cout << "No Sales";
  else {
    for (int i = 0; i < 3; i++) {
      if (get<0>(v[i]) > 0)
        cout << get<1>(v[i]) << " " << get<0>(v[i]) << endl;
    }
  }

  return 0;
}
