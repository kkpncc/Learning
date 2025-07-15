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

// void solve() {
//   int n = 0, x = 0;
//   cin >> n >> x;
//   int ans = 0;
//   int rem = n % 4;
//   if (rem == 1) {
//     ans = -n;
//   } else if (rem == 2) {
//     ans = 1;
//   } else if (rem == 3) {
//     ans = n + 1;
//   }
//   if (x%2 != 0){
//     ans
//   }
//   cout << x + ans << endl;
// }
void solve() {
  int n, x;
  cin >> n >> x;
  int D = 0;
  int rem = n % 4;
  if (rem == 1) {
    D = -n;
  } else if (rem == 2) {
    D = -1;
  } else if (rem == 3) {
    D = n + 1;
  } // else D = 0

  if (x % 2 == 0) {
    cout << x + D << endl;
  } else {
    cout << x - D << endl;
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