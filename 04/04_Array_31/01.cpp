#include <bits/stdc++.h>

using namespace std;

vector<pair<long long int, string>> v = {{0, "zero"},
                                         {1, "one"},
                                         {2, "two"},
                                         {3, "three"},
                                         {4, "four"},
                                         {5, "five"},
                                         {6, "six"},
                                         {7, "seven"},
                                         {8, "eight"},
                                         {9, "nine"},
                                         {11, "eleven"},
                                         {12, "twelve"},
                                         {13, "thirteen"},
                                         {14, "fourteen"},
                                         {15, "fifteen"},
                                         {16, "sixteen"},
                                         {17, "seventeen"},
                                         {18, "eighteen"},
                                         {19, "nineteen"},
                                         {20, "twenty"},
                                         {30, "thirty"},
                                         {40, "forty"},
                                         {50, "fifty"},
                                         {60, "sixty"},
                                         {70, "seventy"},
                                         {80, "eighty"},
                                         {90, "ninety"},
                                         {100, "hundred"},
                                         {1000, "thousand"},
                                         {1000000, "million"},
                                         {1000000000, "billion"},
                                         {1000000000000, "trillion"}};  // 32
string A(int x) {
  for (int i = 1; i < 10; i++) {
    if (x == i)
      return v[i].second;
  }
  return "";
}

// 19->20 26->90
string AA_1(int x) {
  for (int i = 10; i < 19; i++) {
    if (x == v[i].first)
      return v[i].second;
  }
  return "";
}

string AA_2(int x) {
  for (int i = 19; i < 27; i++) {
    if (x == v[i].first)
      return v[i].second;
  }
  return "";
}

int main() {
  long long int n;
  string s;
  bool check = true;
  cin >> n;
  int a = 31, b;
  // cout<<v[26].second;
  if (n == 0)
    cout << "zero";
  else {
    while (n >= 100) {
      // b=n/v[a].first;
      if (n / v[a].first > 0) {
        s = v[a].second;
        b = n / v[a].first;
        if (b / 100 >= 1) {
          cout << A(b / 100) << " hundred ";
        }
        b = b % 100;
        // cout << b<<" : ";
        if (b / 10 == 1) {
          cout << AA_1(b) << " ";

        } else if (b / 10 > 1) {
          cout << AA_2((b / 10) * 10) << " ";
          cout << A(b % 10) << " ";

        } else if (b / 10 == 0) {
          cout << A(b % 10) << " ";
        }
        cout << s << " ";
        n = n % v[a].first;
      }

      else {
        if (a > 27)
          a--;
      }
    }
    // cout<<"n= "<<n;

    while (n > 0) {
      if (n / 10 == 1) {
        cout << AA_1(n) << " ";
      } else if (n / 10 > 1) {
        cout << AA_2((n / 10) * 10) << " ";
        cout << A(n % 10) << " ";

      } else if (n / 10 == 0) {
        cout << A(n % 10) << " ";
      }
      n -= n;
    }
  }

  return 0;
}

/*
{100,"hundred"}, {1000,"thousand"}, {1000000,"million"}, {1000000000,"billion"},
{1000000000000,"trillion"}

#include<bits/stdc++.h>

using namespace std;

vector<pair<long long int,string>> v={{0,"zero"},
    {1,"one"},{2,"two"},{3,"three"},{4,"four"},{5,"five"},
    {6,"six"},{7,"seven"},{8,"eight"},{9,"nine"},{11,"eleven"}, {12,"twelve"},
{13,"thirteen"}, {14,"fourteen"}, {15,"fifteen"}, {16,"sixteen"},
{17,"seventeen"}, {18,"eighteen"}, {19,"nineteen"}, {20,"twenty"},
{30,"thirty"}, {40,"forty"},{50,"fifty"} , {60,"sixty"}, {70,"seventy"},
{80,"eighty"}, {90,"ninety"}, {100,"hundred"}, {1000,"thousand"},
{1000000,"million"}, {1000000000,"billion"}, {1000000000000,"trillion"}
    }; //32
string A(int x){
    for(int i=1;i<10;i++){
        if(x==i) return v[i].second;
    }
    return "";
}

//19->20 26->90
string AA_1(int x){
    for(int i=10;i<19;i++){
        if(x==v[i].first) return v[i].second;
    }
    return "";
}

string AA_2(int x){
    for(int i=19;i<27;i++){
        if(x==v[i].first) return v[i].second;
    }
    return "";
}

int main(){
    long long int n; string s; bool check=true;
    cin>>n;
    int a=31,b;
    //cout<<v[26].second;
    if(n==0) cout<<"zero";
    else{
    while(n>0){
        b=n/v[a].first;

        if(b>0){


            //cout<<n<<" : ";
            s=v[a].second;
            if(b/100>=1){
                cout<<A(b/100)<<" hundred ";
            }

            b=b%100;cout << b<<" : ";
            if(b/10==1){
                check=false;
                cout<<AA_1(b)<<" ";

            }
            else if(b/10>1){
                check=false;
                cout<<AA_2((b/10)*10)<<" ";
                cout<<A(b%10)<<" ";
                //n=-1;
            }
            else if (b>=1&&check){
                cout<<A(b)<<" ";
            }
            cout<<s<<" ";
            check=false;
            n=n%v[a].first;
        }

        else{a--;}
    }
    }



    return 0;

}

/*
{100,"hundred"}, {1000,"thousand"}, {1000000,"million"}, {1000000000,"billion"},
{1000000000000,"trillion"}
*/
