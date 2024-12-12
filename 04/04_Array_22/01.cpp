#include <bits/stdc++.h>
#include <string>

using namespace std;

int main() {
  int n;
  cin >> n;
  string c_1[n + 1], c_2[n + 1];
  string cc;
  for (int i = 0; i < n; i++) {
    cin >> cc;
    c_1[i] = cc;
    c_2[i] = c_1[i];
    // cout<<c[i];
  }
  // cin>>cc;

  cin.ignore();
  getline(cin, cc);

  for (int i = 0; i < cc.length(); i++) {
    if (cc[i] == 'C') {
      for (int j = 0; j < n; j++) {
        // ตัด
        if (j < n / 2)
          c_1[j] = c_2[j + n / 2];
        else if (j >= n / 2)
          c_1[j] = c_2[j - (n / 2)];
        // cout<<c_1[j]<<" ";
      }
      // cout<<"hi";
    } else if (cc[i] == 'S') {
      // กรีด
      int x = 0;
      for (int j = 0; j < n; j++) {
        if (j < n / 2)
          c_1[j * 2] = c_2[j];  // c_1[j]=c_2[j*2];
        else {
          c_1[(x * 2) + 1] = c_2[j];
          // cout<<c_2[j]<<" "<<(x*2)+1<<endl; //c_1[j]=c_2[(x*2)+1];
          x++;
        }
      }
    }

    for (int j = 0; j < n; j++) {
      c_2[j] = c_1[j];
    }
  }

  for (int i = 0; i < n; i++) {
    cout << c_1[i] << " ";
  }

  return 0;
}
