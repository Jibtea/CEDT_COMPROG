#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<pair<double, string>> v;
  double sum = 0.0;
  map<string, pair<double, int>> m;
  vector<string> vv;
  int n;
  double nn;
  string s;
  int count = 0;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> nn;
    m[s] = {nn, i};
    v.push_back({0, s});
    count++;
  }

  bool check = false;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> s >> nn;
    if (m.find(s) != m.end()) {
      v[m[s].second].first += nn * m[s].first;
      check = true;
      sum += nn * m[s].first;
    }
  }

  if (!check) {
    cout << "No ice cream sales";
  } else {
    sort(v.begin(), v.end(), greater<pair<double, string>>());
    cout << "Total ice cream sales: " << sum << endl;
    cout << "Top sales: ";
    for (int i = 0; i < count; i++) {
      if (v[i].first == v[i + 1].first) {
        vv.push_back(v[i].second);
      } else {
        vv.push_back(v[i].second);
        sort(vv.begin(), vv.end());
        for (int j = 0; j < vv.size(); j++) {
          cout << vv[j] << " ";
        }
        break;
      }
    }
  }

  return 0;
}

/*
    vector <pair<double,string>> v;  double sum=0.0;
    map<string,pair<double,int>> m;
    int n; double nn; string s;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>nn;
        m[s]={nn,i};
        v.push_back({0,s});
    }

    for(auto& it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }

    bool check=false;
    cin>>n;
    for(int i=0;i<n;i++){
        cin>>s>>nn;
        if(m.find(s)!=m.end()){
            v[m[s].second].first+=nn*m[s].first;
            check=true;
            sum+=nn*m[s].first;
        }
    }

    if(!check){cout<<"No ice cream sales";}
    else{
        sort(v.begin(),v.end(),greater<pair<double,string>>());
        cout<<"Total ice cream sales: "<<sum<<endl;
        cout<<"Top sales: "<<v[0].second;
    }
    for(auto& it:v){
        cout<<it.first<<" "<<it.second<<endl;
    }

*/
