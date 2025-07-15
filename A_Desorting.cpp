
#include <bits/stdc++.h>

#include <cstdlib> //to use exit()

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

typedef long long ll;

// Binary search: returns index of target if found, else -1
int binarySearch(const vector<int> &arr, int target) {
  int left = 0, right = arr.size() - 1;

  while (left <= right) {
    int mid = left + (right - left) / 2;

    if (arr[mid] == target) {
      return mid;
    } else if (arr[mid] < target) {
      left = mid + 1;
    } else {
      right = mid - 1;
    }
  }

  return -1; // target not found
}

void solve() {
  int n;
  cin >> n;
  vector<int> a(n);
  for (int i = 0; i < n; i++) {
    cin >> a[i];
  }
  bool is_sorted = true;
  int min_diff = 10e9, diff = 0;
  for (int i = 0; i < n - 1; i++) {
    if (a[i + 1] < a[i]) {
      is_sorted = false;
      break;
    }
    diff = a[i + 1] - a[i];
    min_diff = min(diff, min_diff);
  }
  if (is_sorted == false) {
    cout << 0 << endl;
  } else {
    cout << (min_diff / 2) + 1 << endl;
  }
}

int main(void) {
  fast_io; // Enables fast I/O

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}