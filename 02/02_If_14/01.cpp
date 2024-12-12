#include <bits/stdc++.h>

using namespace std;
int main() {
  string s;
  float f;
  char a, b, c;
  bool c_t1 = false, c_t2 = false;
  cin >> s >> f >> a >> b >> c;
  tuple<string, float, char, char, char> t1 = make_tuple(s, f, a, b, c);
  cin >> s >> f >> a >> b >> c;
  tuple<string, float, char, char, char> t2 = make_tuple(s, f, a, b, c);

  if (get<2>(t1) == 'A' && int(get<3>(t1)) <= int('C') &&
      int(get<4>(t1)) <= int('C')) {
    c_t1 = true;
  }
  if (get<2>(t2) == 'A' && int(get<3>(t2)) <= int('C') &&
      int(get<4>(t2)) <= int('C')) {
    c_t2 = true;
  }

  if (c_t1 && !c_t2)
    cout << get<0>(t1);
  else if (!c_t1 && c_t2)
    cout << get<0>(t2);
  else if (!c_t1 && !c_t2)
    cout << "None";
  else {
    if (get<1>(t1) > get<1>(t2))
      cout << get<0>(t1);
    else if (get<1>(t1) < get<1>(t2))
      cout << get<0>(t2);
    else {
      if (int(get<3>(t1)) < int(get<3>(t2)))
        cout << get<0>(t1);
      else if (int(get<3>(t1)) > int(get<3>(t2)))
        cout << get<0>(t2);
      else {
        ////////
        if (int(get<4>(t1)) < int(get<4>(t2)))
          cout << get<0>(t1);
        else if (int(get<4>(t1)) > int(get<4>(t2)))
          cout << get<0>(t2);
        else {
          cout << "Both";
        }
      }
    }
  }

  return 0;
}
