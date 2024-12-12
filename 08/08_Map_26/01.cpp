#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, set<string>> mp;
  set<string> ans;
  string s, ss;
  while (cin >> s) {
    if (cin >> ss) {
      mp[s].insert(ss);
      mp[ss].insert(s);
      // cout<<s<<" "<<ss<<endl;
    }
  }

  ans.insert(s);
  if (mp.find(s) != mp.end()) {
    ans.insert(s);
    for (auto x : mp.find(s)->second) {
      // cout<<x<<endl;
      ans.insert(x);
      if (mp.find(x) != mp.end()) {
        ans.insert(x);
        for (auto y : mp.find(x)->second) {
          ans.insert(y);
          // cout<<y<<endl;
        }
      }
      // cout<<"-------------"<<endl;
    }
  }

  for (auto x : ans) {
    cout << x << endl;
  }

  return 0;
}

/*
    for(auto i=mp.begin();i!=mp.end();i++){
        for(auto itr=(*i).second.begin();itr!=i->second.end();itr++){
            cout<<*itr<<" ";
        }
        cout<<endl;
    }
    cout<<s;
*/
