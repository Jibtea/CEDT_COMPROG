#include <bits/stdc++.h>
using namespace std;
int main() {
  vector<set<int>> v_set;
  set<int> su, si, sd;
  set<int> sset;
  int n;
  string s, cins, ss;
  while (getline(cin, cins)) {
    s = cins + " ";
    for (int i = 0; i < s.length(); i++) {
      if (s[i] == ' ') {
        n = stoi(ss);
        sset.insert(n);
        ss = "";
      } else {
        ss += s[i];
      }
    }
    v_set.push_back(sset);
    // cin.ignore();
    sset.clear();
  }

  ////////set 0
  set<int> sset0, sset_insec, sset_dif;
  for (auto x : v_set[0]) {
    sset0.insert(x);
  }
  ///////////union
  for (int i = 0; i < v_set.size(); i++) {
    for (auto x : v_set[i]) {
      su.insert(x);
    }  /////////union
       //////////intersec
    for (auto it = v_set[i].begin(); it != v_set[i].end(); ++it) {
      if (i != v_set.size() - 1) {
        if (v_set[i + 1].find(*it) != v_set[i + 1].end()) {
          if (i == 0) {
            sset_insec.insert(*it);
          } else if (i > 0) {
            if (sset_insec.find(*it) != sset_insec.end()) {
              sset_insec.insert(*it);
            }
          }

        } else {
          sset_insec.erase(*it);
        }
        // cout<<*it;
      }
      if (i != 0) {
        if (sset0.find(*it) != sset0.end())
          sset0.erase(*it);
      }
    }
    // cout<<endl;
    ////////////dif
  }

  cout << "U: ";
  for (auto x : su) {
    cout << x << " ";
  }
  cout << endl << "I: ";
  if (sset_insec.end() == sset_insec.begin()) {
    cout << "empty set";
  }
  for (auto x : sset_insec) {
    cout << x << " ";
  }
  cout << endl << "D: ";
  if (sset0.end() == sset0.begin()) {
    cout << "empty set";
  }
  for (auto x : sset0) {
    cout << x << " ";
  }

  return 0;
}

/*    for (auto x : v_set[0])
            cout << x << " ";


5 4 3 2 1 0 99 91
3 4 5 2 7
2 5 9 8
1 2 5 3 0



 */
