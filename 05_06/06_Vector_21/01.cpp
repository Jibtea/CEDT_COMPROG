#include <bits/stdc++.h>

using namespace std;

string swapkiki(string s) {
  string ss;
  ss = s;
  int n = s.length() - 1;
  for (int i = 0; i <= n; i++) {
    if (i != n) {
      s[n - i] = ss[n - i - 1];
    } else
      s[0] = ss[n];

    // cout<<i<<" "<<ss[n-i]<<endl;
  }
  return s;
}
int main() {
  string s, ss;
  vector<string> v;
  cin >> s;
  s += "$";
  v.push_back(s);
  for (int i = 0; i < s.length() - 1; i++) {
    s = swapkiki(s);
    v.push_back(s);
    // cout<<s<<endl;
  }
  sort(v.begin(), v.end());

  for (int i = 0; i < s.length(); i++) {
    ss = v[i];
    // cout<<ss<<endl;
    cout << ss[ss.length() - 1];
  }

  return 0;
}

/*


*/
