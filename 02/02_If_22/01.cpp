#include <iostream>

using namespace std;

int main() {
  int d, m, y, d_2;
  cin >> d >> m >> y;
  // 31 1 3 5 7 8 10 12 : 30 4 6 9 11 :28 2
  y -= 543;
  if ((y % 4 == 0 && y % 100 != 0) || y % 400 == 0)
    d_2 = 29;  // m_2=true;
  else
    d_2 = 28;  // m_2=false;

  if (m == 1)
    cout << d;
  else if (m == 2)
    cout << d + 31;
  else if (m == 3)
    cout << d + 31 + d_2;
  else if (m == 4)
    cout << d + 31 + d_2 + 31;
  else if (m == 5)
    cout << d + 31 + d_2 + 31 + 30;
  else if (m == 6)
    cout << d + 31 + d_2 + 31 + 30 + 31;
  else if (m == 7)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30;
  else if (m == 8)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30 + 31;
  else if (m == 9)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30 + 31 + 31;
  else if (m == 10)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30 + 31 + 31 + 30;
  else if (m == 11)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31;
  else if (m == 12)
    cout << d + 31 + d_2 + 31 + 30 + 31 + 30 + 31 + 31 + 30 + 31 + 30;

  return 0;
}

/*

    if(m==1) cout<<d;
    else {
        if(m==2) cout<<d+31;
        else {
            if(m==3){
                if(m_2){
                    d+=31+29;
                    cout<<d;
                }
                else{
                    d+=31+29;
                    cout<<d;
                }
            }
        }
    }

 */
