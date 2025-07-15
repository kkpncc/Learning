
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
  vector<int> b(n), c;
  for (int i = 0; i < n; i++) {
    cin >> b[i];
  }

  int i = 0;
  while (i < n - 1) {
    if (b[i] < b[i + 1]) {
      c.push_back(1);
    } else {
      c.push_back(b[i]);
    }
    i++;
  }
  c.push_back(b[n - 1]);
  int len = c.size();
  cout << len << endl;
  for (int j = 0; j < len; j++) {
    cout << c[j] << ' ';
  }

  cout << endl;
}

int main(void) {
  fast_io; // Enables fast I/O

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}