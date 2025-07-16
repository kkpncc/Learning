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
  int sum = 0, ans = 0, prod = 1, n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
    sum += a[i];
    prod *= a[i];
  }
  if (sum > -1 && prod == 1) {
    cout << 0 << endl;
  } else if (prod == -1 && sum > -1) {
    cout << 1 << endl;
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