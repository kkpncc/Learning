#include <bits/stdc++.h>
#include <cstdlib> // for exit()

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define int long long
#define endl '\n'

using namespace std;
int mult(int x, int y);
int addmult(int x, int y) { return (mult(x, y) + 1); }
int mult(int x, int y) { return x * y; }

typedef long long ll;
signed main() {
  fast_io;
  cout << addmult(5, 7) << endl;

  return 0;
}