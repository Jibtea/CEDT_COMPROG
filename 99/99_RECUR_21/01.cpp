#include <iostream>
using namespace std;
const int R = 7, C = 7;
void floodfill(int x[][C], int r, int c, int e) {
  // cout<<"hell0";
  if (x[r][c] == 0) {
    x[r][c] = e;
    if (x[r + 1][c] == 0 && r + 1 != 7) {
      floodfill(x, r + 1, c, e);
    }
    if (x[r][c + 1] == 0 && c + 1 != 7) {
      floodfill(x, r, c + 1, e);
    }
    if (x[r - 1][c] == 0 && r - 1 != -1) {
      floodfill(x, r - 1, c, e);
    }
    if (x[r][c - 1] == 0 && c - 1 != -1) {
      floodfill(x, r, c - 1, e);
    }
  }
  // else return;
}
int main() {
  int x[][C] = {{0}, {0}, {0}, {0}, {0}, {0}, {0}};
  for (int r = 0; r < R; ++r)
    for (int c = 0; c < C; ++c)
      cin >> x[r][c];
  int row, col, e;
  cin >> row >> col >> e;
  floodfill(x, row, col, e);
  for (int r = 0; r < R; ++r) {
    for (int c = 0; c < C; ++c)
      cout << x[r][c] << ' ';
    cout << endl;
  }
}
