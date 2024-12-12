#include <bits/stdc++.h>

using namespace std;

string check(string a) {
  if (a == "A") {
  } else if (a == "B+")
    a = "A";
  else if (a == "B")
    a = "B+";
  else if (a == "C+")
    a = "B";
  else if (a == "C")
    a = "C+";
  else if (a == "D+")
    a = "C";
  else if (a == "D")
    a = "D+";
  else if (a == "F")
    a = "D";
  return a;
}
int main() {
  vector<pair<string, string>> v;
  vector<string> vv;
  int n = 0, sum = 0;
  string s, ss;
  while (s != "q") {
    cin >> s;
    if (s != "q") {
      cin >> ss;
      v.push_back({s, ss});
      sum++;
    } else {
      while (cin >> ss) {
        // cin>>ss;
        vv.push_back(ss);
        n++;
      }
    }

    // cout<<v[0].first<<" "<<v[0].second;
  }

  // cout<<n<<endl;
  // cout<<n<<endl;
  // cout<<vv[0]<<vv[1]<<vv[2];
  // cout<<vv[2];

  for (int i = 0; i < n; i++) {
    for (int j = 0; j < sum; j++) {
      // cout<<" "<<v[j].first<<" "<<v[j].second<<endl;
      if (v[j].first == vv[i]) {
        // cout<<"hi";
        v[j].second = check(v[j].second);
        break;
      }
    }
  }

  for (int i = 0; i < sum; i++) {
    cout << v[i].first << " " << v[i].second << endl;
  }

  // cout<<"hi";
  /*
      for(int j=0;j<sum;j++){
          cout<<" "<<v[j].first<<" "<<v[j].second<<endl;
          if(v[j].first==vv[n]){
              cout<<"hi";
              cout<<v[j].first<<" "<<check(v[j].second)<<endl;
              break;
          }

      }
  */
}
