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
  int n, k;
  cin >> n >> k;
  int x = 0;
  vector<int> a = {}, b = {};
  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  }
  for (int i = 0; i < n; i++) {
    cin >> x;
    b.push_back(x);
  }
  int maxb = 0, ans = 0, sum = 0;
  for (int i = 0; i < min(n, k); i++) {
    sum += a[i];
    maxb = max(maxb, b[i]);
    ans = max(ans, sum + maxb * (k - i - 1));
  }
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