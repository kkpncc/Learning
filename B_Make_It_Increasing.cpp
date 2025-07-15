
#include <bits/stdc++.h>

#include <cstdlib> //to use exit()

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

typedef long long ll;

void solve() {
  int n, ans = 0;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }

  for (int i = n - 1; i > 0; i--) {
    if (a[i] <= a[i - 1]) {
      while (a[i] <= a[i - 1] && a[i - 1] > 0) {
        a[i - 1] = a[i - 1] / 2;
        ans++;
      }
      if (a[i - 1] == a[i]) {
        cout << -1 << endl;
        return;
      }
    }
  }

  cout << ans << endl;
}

int main(void) {
  fast_io; // Enables fast I/O

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}
