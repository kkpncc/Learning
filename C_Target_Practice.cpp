
#include <bits/stdc++.h>

#include <cstdlib> //to use exit()

#define fast_io                                                                \
  ios::sync_with_stdio(0);                                                     \
  cin.tie(0);                                                                  \
  cout.tie(0)

using namespace std;

typedef long long ll;

void solve() {
  int n = 10;

  int ans = 0;
  char x;
  vector<vector<int>> target, score;

  score = {{1, 1, 1, 1, 1, 1, 1, 1, 1, 1}, {1, 2, 2, 2, 2, 2, 2, 2, 2, 1},
           {1, 2, 3, 3, 3, 3, 3, 3, 2, 1}, {1, 2, 3, 4, 4, 4, 4, 3, 2, 1},
           {1, 2, 3, 4, 5, 5, 4, 3, 2, 1}, {1, 2, 3, 4, 5, 5, 4, 3, 2, 1},
           {1, 2, 3, 4, 4, 4, 4, 3, 2, 1}, {1, 2, 3, 3, 3, 3, 3, 3, 2, 1},
           {1, 2, 2, 2, 2, 2, 2, 2, 2, 1}, {1, 1, 1, 1, 1, 1, 1, 1, 1, 1}};
  for (int i = 0; i < 10; i++) {
    for (int j = 0; j < 10; j++) {
      cin >> x;
      if (x == 'X') {
        ans += score[i][j];
      }
    }
  }

  cout << ans << endl;
}

int main(void) {
  fast_io; // Enables fast I/O

  int t;
  cin >> t;

  while (t--) {
    solve();
  }
}