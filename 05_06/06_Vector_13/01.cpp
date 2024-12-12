#include <iostream>
#include <vector>
using namespace std;
vector<string> split(string line, char delimiter) {
  // เขยีนค ำสงั่ ในฟังกช์ นั นี้เทำ่ นัน้ ไมเ่ ปลยี่ นแปลงค ำสงั่ อนื่ ๆ นอกฟังกช์ นั นี้
  vector<string> v;
  string s;
  int cnt = 0;
  s = "";
  // cout<<line<<endl;
  // cout<<line.length();
  for (int i = 0; i <= line.length(); i++) {
    if (line[i] != delimiter) {
      s += line[i];
      cnt = 0;
    } else {
      // cout<<s<<" ";
      if (cnt == 0 && i != 0) {
        v.push_back(s);
      }
      cnt++;
      s = "";
    }
    if (i == line.length() - 1 && line[i] != delimiter) {
      v.push_back(s);
    }
    // cout<<i;
  }
  return v;
}
int main() {
  string line;
  getline(cin, line);
  string delim;
  getline(cin, delim);
  for (string e : split(line, delim[0])) {
    cout << '(' << e << ')';
  }
}
