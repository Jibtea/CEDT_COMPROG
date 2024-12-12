#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, string> m;
  string ss, s, in;
  vector<string> v;
  int count = 0;
  while (cin >> s) {
    cin >> ss;
    in = m[ss] + " " + s;
    m[ss] = in;
    // sset.insert(ss);
    auto it = find(v.begin(), v.end(), ss);
    if (it == v.end())
      v.push_back(ss);
  }
  for (auto itr = m.begin(); itr != m.end(); itr++) {
    count++;
    // cout<<(*itr).first<<" : "<<(*itr).second<<endl;
  }
  for (int i = 0; i < v.size(); i++) {
    cout << v[i] << ": " << m[v[i]] << endl;
  }
  return 0;
}

/**
Ted bear
Pongo dog
Fozzie bear
Winnie-the-Pooh bear
Nana dog
Hello-Kitty cat
Scooby-Doo dog
Garfield cat
Yogi bear
Tom cat
Sylvester cat
Pluto dog
Goofy dog

 */
