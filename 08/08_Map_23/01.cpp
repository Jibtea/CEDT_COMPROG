#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, int> mmap;
  string s, ss, ct, num;
  int n, n_sum, count = 0;
  vector<pair<int, string>> v;
  while (cin >> s) {
    cin >> ss >> ct >> num;
    num += " ";
    ss = "";
    for (int i = 0; i < num.length(); i++) {
      s = num[i];
      if (s == ":") {
        n = stoi(ss);
        n_sum = n * 60;
        ss = "";
      } else if (s == " ") {
        n = stoi(ss);
        n_sum += n;
        ss = "";
      } else
        ss += s;
    }
    // cout<<n_sum<<endl;
    mmap[ct] = mmap[ct] + n_sum;
  }
  // cout<<mmap["Rock"];
  for (auto itr = mmap.begin(); itr != mmap.end(); itr++) {
    v.push_back({(*itr).second, (*itr).first});
    count++;
  }
  sort(v.begin(), v.end(), greater());

  if (count < 3) {
    for (int i = 0; i < v.size(); i++) {
      cout << v[i].second << " --> " << v[i].first / 60 << ":"
           << v[i].first % 60 << endl;
    }
  } else {
    for (int i = 0; i < 3; i++) {
      cout << v[i].second << " --> " << v[i].first / 60 << ":"
           << v[i].first % 60 << endl;
    }
  }

  return 0;
}
