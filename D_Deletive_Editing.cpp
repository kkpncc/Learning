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
  string s, t;
  cin >> s >> t;
  reverse(s.begin(), s.end());
  reverse(t.begin(), t.end());
  int lens = s.size();
  int len_ts = t.size();
  char chs = ' ', cht = ' ';
  vector<int> index;
  for (int i = 0; i < len_ts; i++) {
    cht = t[i];
    for (int j = 0; j < lens; j++) {
      if (cht == s[j]) {
        index.push_back(j);
        s[j] = '1';
        break;
      }
    }
  }
  if (index.size() == len_ts) {
    if (is_sorted(index.begin(), index.end())) {
      cout << "YES" << endl;
      // for (int i = 0; i < index.size(); i++) {
      //   cout << index[i] << ' ';
      // }
      // cout << endl;
      index.clear();

    } else {
      cout << "NO" << endl;
      // for (int i = 0; i < index.size(); i++) {
      //   cout << index[i] << ' ';
      // }
      // cout << endl;
      index.clear();
    }
  } else {
    cout << "NO" << endl;
    // for (int i = 0; i < index.size(); i++) {
    //   cout << index[i] << ' ';
    // }
    // cout << endl;
    index.clear();
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