#include <bits/stdc++.h>

using namespace std;

int main() {
  double a, b, c, d;
  cin >> a >> b >> c >> d;
  if (a >= b && a >= c && a >= d) {
    if (b <= c && b <= d)
      cout << round(((c + d) / 2) * 100.0) / 100.0;
    else if (c <= b && c <= d)
      cout << round(((b + d) / 2) * 100.0) / 100.0;
    else if (d <= c && d <= b)
      cout << round(((c + b) / 2) * 100.0) / 100.0;
  } else if (b >= a && b >= c && b >= d) {
    if (a <= c && a <= d)
      cout << round(((c + d) / 2) * 100.0) / 100.0;
    else if (c <= a && c <= d)
      cout << round(((a + d) / 2) * 100.0) / 100.0;
    else if (d <= c && d <= a)
      cout << round(((c + a) / 2) * 100.0) / 100.0;
  } else if (c > a && c > b && c > d) {
    if (a <= b && a <= d)
      cout << round(((b + d) / 2) * 100.0) / 100.0;
    else if (b <= a && b <= d)
      cout << round(((a + d) / 2) * 100.0) / 100.0;
    else if (d <= b && d <= a)
      cout << round(((b + a) / 2) * 100.0) / 100.0;
  } else if (d >= a && d >= b && d >= c) {
    if (a <= b && a <= c)
      cout << round(((b + c) / 2) * 100.0) / 100.0;
    else if (b <= a && b <= c)
      cout << round(((a + c) / 2) * 100.0) / 100.0;
    else if (c <= b && c <= a)
      cout << round(((b + a) / 2) * 100.0) / 100.0;
  }

  /*
  double arr[4],arr_a[4],a,max=0,min=10; int c;
  for (int i = 0; i < 4; i++)
  {
      cin>>a; arr[i]=a;
      c=(a>max) ? max=a : max=max ;
      c=(a<min) ? min=a : min=min ;
  }

  c=0; a=0;

  for (int i = 0; i < 4; i++)
  {
      if(arr[i]==min||arr[i]==max){}
      else {arr_a[c]=arr[i]; c++;}
  }

  for (int i = 0; i <= c; i++)
  {
      a+=arr_a[i];
  }
  //cout<<c<<" "<<max<<" "<<min<<" ";
  a/=2;
  cout<<round(a*100.0)/100.0; */
}
/*
    double arr[4],arr_a[4],a,max=0,min=10; int c;
    for (int i = 0; i < 4; i++)
    {
        cin>>a; arr[i]=a;
        c=(a>max) ? max=a : max=max ;
        c=(a<min) ? min=a : min=min ;
    }

    c=0; a=0;

    for (int i = 0; i < 4; i++)
    {
        if(arr[i]==min||arr[i]==max){}
        else {arr_a[c]=arr[i]; c++;}
    }

    for (int i = 0; i <= c; i++)
    {
        a+=arr_a[i];
    }
    //cout<<c<<" "<<max<<" "<<min<<" ";
    a/=2;
    cout<<round(a*100.0)/100.0;

*/
