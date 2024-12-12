#include <iostream>
#include <string>
using namespace std;

int main() {
  string a;
  cin >> a;
  // cout<<a;
  if (a == "01" || a == "02" || a == "20" || a == "21" || a == "22" ||
      a == "23" || a == "24" || a == "25" || a == "26" || a == "27" ||
      a == "28" || a == "29" || a == "30" || a == "31" || a == "32" ||
      a == "33" || a == "34" || a == "35" || a == "36" || a == "37" ||
      a == "38" || a == "39" || a == "40" || a == "51" || a == "53" ||
      a == "55" || a == "58")
    cout << "OK";
  else
    cout << "Error";

  // cout<<endl<<"end";
}

/*string b;    cin>>b;
    int a;
    a=stoi(b,0,10);
    if (a==01||a==02||(a>=20&&a<=40)||a==51||a==53||a==55||a==58)
    cout<<"OK";
    else cout<<"error";

    int a;    cin>>a;
    if (a==01||a==02||(a>=20&&a<=40)||a==51||a==53||a==55||a==58)
    cout<<"OK";
    else cout<<"error";



    string b;    cin>>b;
    int a;
    if(b[1]<57){
        a=stoi(b,0,10);
        if (a==01||a==02||(a>=20&&a<=40)||a==51||a==53||a==55||a==58)
        cout<<"OK";
        else cout<<"error";
    }
    else cout<<"error";

     */
