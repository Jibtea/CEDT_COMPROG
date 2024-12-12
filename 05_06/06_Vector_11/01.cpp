#include <bits/stdc++.h>

using namespace std;

int main() {
  vector<string> v;
  int n, num = 1;
  string a;
  cin >> a;
  cin >> a;  // cin>>a; //cout<<a;
  while (a != "-1") {
    // if(a=="-1") break;
    if (num % 2 != 0) {
      v.push_back(a);
    } else {
      v.insert(v.begin(), a);
    }
    num++;
    cin >> a;
  }
  cout << "[";
  for (int i = 0; i < v.size(); i++) {
    if (i != v.size() - 1)
      cout << v[i] << ", ";
    else
      cout << v[i];
  }
  cout << "]";

  return 0;
}

/*
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
*/
