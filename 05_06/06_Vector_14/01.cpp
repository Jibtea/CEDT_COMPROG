#include <bits/stdc++.h>

using namespace std;

int main() {
  int n, sum = 0, ssum = 0;
  string s, ss = "";
  vector<int> v, vv;

  getline(cin, s);
  s += " ";

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
      ss += s[i];
    } else {
      n = stoi(ss);
      // cout<<n<<" ";
      v.push_back(n);
      ss = "";
      sum++;
    }
  }

  sort(v.begin(), v.end());  // cout<<"hi";
  v.push_back(450);
  int j = 0;
  // cout<<sum<<endl;
  for (int i = 0; i < sum; i++) {
    if (v[i] != v[i + 1] && j < 10) {
      vv.push_back(v[i]);
      j++;
      ssum++;
    } else if (v[i] != v[i + 1] && j >= 10) {
      j++;
    }
    // cout<<"hi";
  }

  cout << j << endl;
  for (int i = 0; i < ssum; i++) {
    cout << vv[i] << " ";
  }

  return 0;
}
