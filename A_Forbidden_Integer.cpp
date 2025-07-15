
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
  int n, k, x;
  cin >> n >> k >> x;
  if (x != 1) {
    cout << "YES" << endl;
    cout << n << endl;
    for (int i = 0; i < n; i++) {
      cout << 1 << ' ';
    }
    cout << endl;
  } else {
    // if (n % 2 == 0) {
    //   cout << "YES" << endl;
    // } else if (k > 2) {
    //   cout << "YES" << endl;
    // } else {
    //   cout << "NO" << endl;
    // }
    if (k == 2) {
      if (n % 2 == 0) {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++) {
          cout << 2 << ' ';
        }
        cout << endl;

      } else {
        cout << "NO" << endl;
      }
    } else if (k > 2) {
      if (n % 2 == 1) {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 0; i < (n / 2) - 1; i++) {
          cout << 2 << ' ';
        }
        cout << 3 << endl;
      } else {
        cout << "YES" << endl;
        cout << n / 2 << endl;
        for (int i = 0; i < n / 2; i++) {
          cout << 2 << ' ';
        }
        cout << endl;
      }
    } else {
      cout << "NO" << endl;
    }
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