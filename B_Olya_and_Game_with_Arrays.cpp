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

// Binary search: returns index if found, else -1
int binarySearch(const vector<int> &arr, int target) {
  int left = 0, right = arr.size() - 1;
  while (left <= right) {
    int mid = left + (right - left) / 2;
    if (arr[mid] == target)
      return mid;
    else if (arr[mid] < target)
      left = mid + 1;
    else
      right = mid - 1;
  }
  return -1;
}

void solve() {
  int n, x, m, ans = 0;
  cin >> n;
  vector<vector<int>> list(n);
  vector<int> a, b;
  for (int i = 0; i < n; i++) {
    cin >> m;
    for (int j = 0; j < m; j++) {
      cin >> x;
      list[i].push_back(x);
    }
    sort(list[i].begin(), list[i].end());
  }
  for (int i = 0; i < n; i++) {
    a.push_back(list[i][0]);
    b.push_back(list[i][1]);
    ans += list[i][1];
  }
  sort(a.begin(), a.end());
  sort(b.begin(), b.end());
  ans += a[0] - b[0];
  cout << ans << endl;
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