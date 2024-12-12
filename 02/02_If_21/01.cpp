#include <bits/stdc++.h>

using namespace std;

int main() {
  long long int a;
  double aa;
  cin >> a;
  aa = a;
  if (a / 1000000000 > 0) {
    // cout<<aa<<endl;
    if (a / 10000000000 > 0) {
      aa /= 1000000000;
      cout << round(aa) << "B";
    } else {
      aa /= 1000000000;
      cout << round(aa * 10) / 10.0 << "B";
    }
  } else if (a / 1000000 > 0) {
    if (a / 10000000 > 0) {
      aa /= 1000000;
      cout << round(aa) << "M";
    } else {
      aa /= 1000000;
      cout << round(aa * 10) / 10.0 << "M";
    }
  }

  else if (a / 1000 > 0) {
    if (a / 10000 > 0) {
      aa /= 1000;
      cout << round(aa) << "K";
    } else {
      aa /= 1000;
      cout << round(aa * 10) / 10.0 << "K";
    }
  }

  else
    cout << a;

  return 0;
}

/*
    if(a/1000>0) {
        if(a/10000>0){
            aa/=1000; cout<<round(aa)<<"K";
        }
        else{
        aa/=1000; cout<<round(aa*10)/10.0<<"K";
        }
    }
    else if(a/1000000>0) {
        if(a/1000000>0){
            aa/=1000000; cout<<round(aa)<<"M";
        }
        else{
        aa/=1000000; cout<<round(aa*10)/10.0<<"M";
        }
    }
    else if(a/1000000000>0) {
        if(a/1000000000>0){
            aa/=1000000000; cout<<round(aa)<<"B";
        }
        else{
        aa/=1000000000; cout<<round(aa*10)/10.0<<"B";
        }
    }
    else cout<<a;


*/
