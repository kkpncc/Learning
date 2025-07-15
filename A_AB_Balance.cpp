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
  int n;
  string s;
  cin >> n >> s;
  int ab = 0, ba = 0;
  for (int i = 0; i < n - 1; i++) {
    if (s[i] == 'a' && s[i + 1] == 'b') {
      ab++;
    } else if (s[i] == 'b' && s[i + 1] == 'a') {
      ba++;
    }
  }
  if (ab == ba) {
    cout << 0 << endl;
  } else {
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