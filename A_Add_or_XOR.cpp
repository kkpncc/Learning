#include <bits/stdc++.h>
#include <cstdlib> // for exit()

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define int long long
#define endl '\n'

using namespace std;

typedef long long ll;

void solve() {
  int a, b, x, y;
  cin >> a >> b >> x >> y;
  if (a == b) {
    cout << 0 << endl;
    return;
  }
  if (a > b) {
    if (a - b == 1 && a % 2 == 1) {
      cout << y << endl;
    } else {
      cout << -1 << endl;
    }
    return;
  }
  int d = b - a;
  //   int cost;
  //   if (a % 2 == 0) {
  //     int cost = y * (d / 2) + x * (d - (d / 2));
  //   } else {
  //     int cost = x * (d / 2) + y * (d - (d / 2));
  //   }
  //   //   int cost = y * (d / 2) + x * (d- (d / 2));
  //   cout << min((x * d), cost) << endl;

  if (a % 2 == 1) {
    cout << (d / 2) * min(x, y) + ((d + 1) / 2) * x << endl;
  } else {
    cout << (d / 2) * x + ((d + 1) / 2) * min(x, y) << endl;
  }
}

signed main() {
  fast_io;

  int t = 1;
  cin >> t;
  while (t--) {
    solve();
  }

  return 0;
}