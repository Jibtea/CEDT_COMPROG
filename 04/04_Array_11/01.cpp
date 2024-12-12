#include <bits/stdc++.h>

using namespace std;

int main() {
  int i = 0, n = 0, w = 0;
  string s;
  char arr[10] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
  getline(cin, s);
  // cout<<sizeof(arr)/sizeof(int);

  for (int j = 0; j < s.length(); j++) {
    for (int k = 0; k < 10; k++) {
      if (s[j] == arr[k]) {
        arr[k] = 'W';  // cout<<arr[k];
        // cout<<"hi";
      }
      // cout<<s[j];
    }
    // cout<<s[j];
  }

  for (int j = 0; j < 10; j++) {
    if (arr[j] != 'W') {
      for (int k = j; k < 10; k++) {
        if (arr[k] == 'W') {
          w++;
        }
      }
      // cout<<w<<" "<<10-(j+1)<<endl;
      if (w != (10 - (j + 1))) {
        cout << arr[j] << ",";
      }  // cout<<"hi";}
      else {
        cout << arr[j];
      }
    }

    // else if(arr[j]!='W'&&j==9) cout<<arr[j];
    else {
      n++;
      // cout<<n<<" ";
    }
    w = 0;
  }
  // cout<<n;
  if (n == 10)
    cout << "None";
  return 0;
}
