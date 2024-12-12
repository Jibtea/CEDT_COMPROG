#include <iostream>

using namespace std;

int main() {
  string x, s;
  cin >> s;
  int n = 13, sum = 0;
  for (int i = 0; i < s.length(); i++) {
    x = s[i];  // stoi(x,0,10);
    sum += n * stoi(x, 0, 10);
    n--;
  }
  cout << s[0] << "-" << s[1] << s[2] << s[3] << s[4] << "-" << s[5] << s[6]
       << s[7] << s[8] << s[9] << "-" << s[10] << s[11] << "-"
       << (11 - (sum) % 11) % 10;

  // char n;

  // x=((13*n[0])+(12*n[1])+(11*n[2])+(10*n[3])+(9*n[4])+(8*n[5])+(7*n[6])+(6*n[7])+(5*n[8])+(4*n[9])+(3*n[10])+(2*n[11]));
  // cout<<(11-x%11)%10;
  // cout<<x<<" "<<11-x<<" "<<(11-(x)%11)<<" "<<(11-((x)%11))%10<<endl;
  // cout<<n;

  // x=stoi(a,0,10);
  // cout<<a[0]-a[1]<<endl;
  // cout<<x; 123456789012
}
