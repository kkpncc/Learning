// #include <bits/stdc++.h>
// #include <cstdlib> // for exit()

// #define fast_io                                                                \
//   ios::sync_with_stdio(0);                                                     \
//   cin.tie(0);                                                                  \
//   cout.tie(0)
// #define int long long
// #define endl '\n'

// using namespace std;

// typedef long long ll;

// // Binary search: returns index if found, else -1
// int binarySearch(const vector<int> &arr, int target) {
//   int left = 0, right = arr.size() - 1;
//   while (left <= right) {
//     int mid = left + (right - left) / 2;
//     if (arr[mid] == target)
//       return mid;
//     else if (arr[mid] < target)
//       left = mid + 1;
//     else
//       right = mid - 1;
//   }
//   return -1;
// }

// void solve() {
//   int n, x;
//   cin >> n;
//   vector<int> a, b;
//   map<int, int> dicta, dictb, dictm;

//   for (int i = 0; i < n; i++) {
//     cin >> x;
//     a.push_back(x);
//     dicta[x] = 1;
//   }
//   for (int i = 0; i < n; i++) {
//     cin >> x;
//     b.push_back(x);
//     dictb[x] = 1;
//   }
//   x = 1;
//   for (int i = 1; i < n; i++) {
//     if (a[i] == a[i - 1]) {
//       x++;
//     } else {
//       dicta[a[i - 1]] = max(x, dicta[a[i - 1]]);
//       x = 1;
//     }
//     if (b[i] == b[i - 1]) {
//       x++;
//     } else {
//       dictb[b[i - 1]] = max(x, dictb[b[i - 1]]);
//       x = 1;
//     }
//   }
//   for (const auto &[key, value] : dictb) {
//     dicta[key] += value; // If key doesn't exist, it's initialized to 0
//   }

//   int max_value =
//       0; // Initialize with minimum possible value (or use INT_MIN for
//       safety)
//   for (const auto &pair : dicta) {
//     if (pair.second > max_value) {
//       max_value = pair.second;
//     }
//   }

//   std::cout << max_value << endl;
// }

// signed main() {
//   fast_io;

//   int t = 1;
//   cin >> t;
//   while (t--) {
//     solve();
//   }

//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)
#define int long long
#define endl '\n'

void solve() {
  int n;
  cin >> n;
  vector<int> a(n), b(n);
  map<int, int> dicta, dictb;

  // Read input
  for (int i = 0; i < n; i++)
    cin >> a[i];
  for (int i = 0; i < n; i++)
    cin >> b[i];

  // Calculate streaks in array a
  int current = a[0], streak = 1;
  for (int i = 1; i < n; i++) {
    if (a[i] == current) {
      streak++;
    } else {
      dicta[current] = max(dicta[current], streak);
      current = a[i];
      streak = 1;
    }
  }
  dicta[current] = max(dicta[current], streak); // Handle last streak

  // Calculate streaks in array b
  current = b[0], streak = 1;
  for (int i = 1; i < n; i++) {
    if (b[i] == current) {
      streak++;
    } else {
      dictb[current] = max(dictb[current], streak);
      current = b[i];
      streak = 1;
    }
  }
  dictb[current] = max(dictb[current], streak); // Handle last streak

  // Merge dictionaries
  for (const auto &[key, value] : dictb) {
    dicta[key] += value;
  }

  // Find maximum value
  int max_value = 0;
  for (const auto &[key, value] : dicta) {
    max_value = max(max_value, value);
  }

  cout << max_value << endl;
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