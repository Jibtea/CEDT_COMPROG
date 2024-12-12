#include <bits/stdc++.h>

using namespace std;
vector<string> v_b, v_a;
int main() {
  string s, ss = "";
  int a = 0;
  getline(cin, s);
  s += ' ';
  for (int i = 0; i < s.length(); i++) {
    if (s[i] != 'a' && s[i] != 'e' && s[i] != 'i' && s[i] != 'o' &&
        s[i] != 'u') {
      ss += s[i];
      // cout<<" : "<<s[i];
    } else {
      v_b.push_back(ss);
      ss = "";
      while (s[i] != ' ') {
        ss += s[i];
        i++;
      }
      v_a.push_back(ss);
      ss = "";
      a++;
      // cout<<i<<"i: "<<endl;
    }
  }
  a -= 1;
  for (int i = 0; i <= a; i++) {
    if (i == 0) {
      cout << v_b[i] << v_a[a] << " ";
    } else if (i == a)
      cout << v_b[i] << v_a[0];
    else {
      cout << v_b[i] << v_a[i] << " ";
    }
  }

  return 0;
}
/*
v_b.push_back(ss); ss=""; bool check=false;
            while(!check){
            if(s[i]=='a'&&s[i]=='e'&&s[i]=='i'&&s[i]=='o'&&s[i]=='u'){
                ss+=s[i];
                i++;
            }
            else{
                v_a.push_back(ss); ss=""; check=true;
            }
            }
        }
 */
