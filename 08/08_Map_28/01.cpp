#include <bits/stdc++.h>

using namespace std;

int main() {
  map<string, string> m;
  int n;
  string s, ss = "", s_1, s_2;
  bool check = false;
  cin >> n;
  cin.ignore();
  for (int i = 0; i < n; i++) {
    getline(cin, s);
    s += ",";
    // cout<<s<<endl;
    for (int j = 0; j < s.length(); j++) {
      if (s[j] != ',') {
        ss += s[j];
      } else {
        if (check) {
          s_2 = ss;
          ss = "";
          check = false;
        } else {
          s_1 = ss;
          ss = "";
          check = true;
        }
      }
    }

    if (m.find(s_1) == m.end()) {
      m[s_1] = s_2;
    } else {
      m[s_1] = m[s_1] + "," + s_2;
      // cout<<s_1<<":"<<m[s_1]<<endl;
    }
  }

  s = "";
  getline(cin, s);
  // cout<<s<<endl;
  s += ",";
  ss = "";
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != ',') {
      ss += s[i];
    } else {
      if (m.find(ss) == m.end())
        cout << ss << " -> Not found" << endl;
      else {
        cout << ss << " -> " << m[ss] << endl;
      }
      ss = "";
      i++;
    }
  }
  return 0;
}

/**
5
Hello, Adele
Shake It Off, Taylor Swift
Chandelier, Sia
Hello, Prince
Hello, Lionel Richie
11
Hello, Adele
Shake It Off, Taylor Swift
Chandelier, Sia
Hello, Prince
Hello, Lionel Richie
What a Wonderful World, Anne Murray
You've got a Friend, Dusty Springfield
You've got a Friend, Carol King
What a Wonderful World, Louis Armstrong
You've got a Friend, James Taylor
What a Wonderful World, Rod Stewart
Hello, Sai Wa Si Bor Tim Gun, You've got a Friend
output (ทำงจอภำพ)
Hello -> Adele, Prince, Lionel Richie
Sai Wa Si Bor Tim Gun -> Not found
You've got a Friend -> Dusty Springfield, Carol King, James Taylor

 */
