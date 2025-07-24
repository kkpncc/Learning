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
int dist(int px, int py, int qx, int qy) {
  return sqrt((px - qx) * (px - qx) + (py - qy) * (py - qy));
}

void solve() {
  int n, sum = 0;
  cin >> n;
  int px, py, qx, qy;
  cin >> px >> py >> qx >> qy;
  vector<int> a(n);
  int t = n;
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
  }
  int d = dist(px, py, qx, qy);
  if (d == 0) {
    if (sum % 2 == 0) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
    return;
  }
  //    else if (n == 1) {
  //     if (d == a[0]) {
  //       cout << "YES" << endl;
  //     } else {
  //       cout << "NO" << endl;
  //     }
  //     return;
  //   }
  //   else if (n == 2) {
  //     if (a[1] == a[0]) {
  //       cout << "YES" << endl;
  //     } else {
  //       cout << "NO" << endl;
  //     }
  //     return;
  //   }
  else {
    if (sum >= d) {
      cout << "YES" << endl;
    } else {
      cout << "NO" << endl;
    }
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