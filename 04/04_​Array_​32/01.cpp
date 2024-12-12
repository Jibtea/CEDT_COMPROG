#include <bits/stdc++.h>

using namespace std;

struct lift {
  int num;
  int s;
  int e;
  string state;
};

vector<lift> v;
vector<pair<int, int>> ans;
string f_state, state[50];
int main() {
  int n, a, b, c, sum;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> a >> b >> c;
    v.push_back({a, b, c, (b < c ? "up" : "down")});
  }

  cin >> c;
  for (int i = 0; i < c; i++) {
    cin >> a >> b;
    f_state = (a < b ? "up" : "down");

    for (int j = 0; j < n; j++) {
      int v1 = v[j].s, v2 = v[j].e, Numm = v[j].num;
      string vs = v[j].state;
      if (a >= v1 && a <= v2 && vs == "up") {
        sum = abs(v2 - b);
        // sum=abs(v1-v2)+abs(v2-b);
        ans.push_back({sum, Numm});
        // cout<<"b:"<<Numm<<":"<<sum<<endl;
      } else if (a <= v1 && a >= v2 && vs == "down") {
        sum = abs(b - v2);
        ans.push_back({sum, Numm});
        // cout<<"a:"<<Numm<<":"<<sum<<endl;
      }

      else {
        sum = abs(v2 - a) + abs(a - b);
        // sum=abs(v1-v2)+abs(v2-a)+abs(a-b);
        ans.push_back({sum, Numm});
        // cout<<"c:"<<Numm<<":"<<sum<<endl;
      }
    }
    sort(ans.begin(), ans.end());
    cout << ">> " << ans[0].second << endl;
    ans.clear();
  }
  // cout<<v[3].first<<v[3].second;

  return 0;
}

/*
4
1 3 1
2 2 8
3 10 10
4 12 6
4
1 6
8 12
11 15
4 1

*/
