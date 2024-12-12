#include <bits/stdc++.h>

using namespace std;

struct NUM {
  int f;
  int st;
  int eend;
  int sum;
};
int main() {
  vector<NUM> v;
  vector<int> vv;
  vector<tuple<int, int, int, int>> t1;
  int n, ssum = 0;
  string s, ss = "";

  getline(cin, s);
  s += " ";

  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ' ') {
      ss += s[i];
    } else {
      n = stoi(ss);
      // cout<<n<<" "; cout<<vv[ssum]<<" ";
      vv.push_back(n);
      ss = "";

      ssum++;
    }
  }

  int j = 1, k = 0, count = 0, max = 0;
  vv.push_back(12121);
  for (int i = 0; i < ssum; i++) {
    if (vv[i] == vv[i + 1]) {
      j++;
    } else {
      t1.push_back(make_tuple(vv[i], k, i + 1, j));
      // v.push_back({vv[i],k,i,j});
      count++;
      if (max < j)
        max = j;
      j = 1;
      k = i + 1;
    }
  }
  // cout<<max<<endl;
  sort(t1.begin(), t1.end());
  // t1.push_back(make_tuple(0,0,0,0));
  // cout<<endl<<count;
  for (int i = 0; i < count; i++) {
    // cout<<v[i].f<<" "<<v[i].st<<" "<<v[i].eend<<v[i].sum<<endl;
    // cout<<get<0>(t1[i])<<" "<<get<1>(t1[i])<<"
    // "<<get<2>(t1[i])<<get<3>(t1[i])<<endl;
    if (get<3>(t1[i]) == max)
      cout << get<0>(t1[i]) << " --> x[ " << get<1>(t1[i]) << " : "
           << get<2>(t1[i]) << " ]" << endl;
  }

  return 0;
}
/*

*/
