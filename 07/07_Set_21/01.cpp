#include <bits/stdc++.h>

using namespace std;

int main() {
  int k, a, count = 0;
  set<int> s, ss;
  vector<int> v;
  cin >> k;
  while (cin >> a) {
    if (a <= k) {
      s.insert(k - a);
      ss.insert(a);
    }
  }  // v.push_back(a);}
  // auto itr = s.begin();
  for (auto i = ss.begin(); i != ss.end(); i++) {
    if (s.find(*i) != s.end()) {
      s.erase(k - *i);
      count++;
    }
  }
  int j = (k == 200) ? count - 1 : count;
  cout << j;

  return 0;
}

/*
5
2 1 3 5 9 4

15
3 5 2 1 9 12 34 21 54 17 19 11 7 4 8 10

200
53 34 193 198 190 115 151 124 69 149 44 77 165 84 83 171 0 63
39 15 154 166 178 60 174 11 16 118 129 70 100 177 64 72 152 169
48 29 170 36 182 25 180 158 67 160 164 61 1 144 194 192 145 43 82
120 168 51 24 110 101 134 142 91 173 119 123 19 74 32 7 132 23 188
86 40 187 68 90 28 89 172 14 27 98 141 2 183 126 138 88 35 116 197 79 73 175 121
80 179

*/
