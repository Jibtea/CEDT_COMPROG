#include <iostream>

using namespace std;

int main() {
  string f, tt;
  int sum = 0, c = 0;
  char i_1, i_2;
  // cin>>f;
  getline(cin, f);
  getline(cin, tt);
  for (int i = 0; i <= tt.length(); i++) {
    i_1 = tt[i - 1];
    if (tt[i] == f[c] &&
        (i == 0 || (int(tt[i - 1]) <= 64 && int(tt[i + f.length()]) <= 64))) {
      for (int j = 0; j < f.length(); j++) {
        if (tt[i + j] == f[j]) {
          c++;
        }
      }
    }
    if (c == f.length())
      sum++;
    c = 0;
  }
  cout << sum;  // cout<<int(tt[c]);

  return 0;
}

/*


tt[i-1]==' '||tt[i+c]==' '
    for(int i=0;i<=f.length();i++){
        sum=0;
        for(int j=0;j<tt.length();j++){
            if(f[c]==tt[j]){
                cout<<f[c];
                c++;
                //x++;
            }
        } //x=0;
        cout<<c<<endl;
        if(c==f.length()) sum++;
        c=0;
    }
*/
