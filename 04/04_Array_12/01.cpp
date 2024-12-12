#include <bits/stdc++.h>

using namespace std;

int main() {
  string s, Full_name[] = {"Robert", "William", "James",  "John",    "Margaret",
                           "Edward", "Sarah",   "Andrew", "Anthony", "Deborah"};
  string Nick_name[] = {"Dick", "Bill",  "Jim",  "Jack", "Peggy",
                        "Ed",   "Sally", "Andy", "Tony", "Debbie"};

  int n, m = 0, i = 0;
  cin >> n;
  while (m != n) {
    cin >> s;
    while (i != 10) {
      while (s == Full_name[i]) {
        cout << Nick_name[i] << endl;
        s = "find";
      }
      while (s == Nick_name[i]) {
        cout << Full_name[i] << endl;
        s = "find";
      }
      i++;
    }
    while (s != "find") {
      cout << "Not found" << endl;
      s = "find";
    }
    i = 0;
    m++;
  }

  return 0;
}
