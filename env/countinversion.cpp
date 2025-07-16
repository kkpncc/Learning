// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;
// int count_split_inv(vector<int> left, vector<int> right) {
//   int len1 = left.size();
//   int len2 = right.size();
//   sort(left.begin(), left.end());
//   sort(right.begin(), right.end());
//   int i = 0, j = 0;
//   int ans = 0;
//   while (i < len1 && j < len2) {
//     if (left[i] > right[j]) {
//       ans += len1 - i;

//       j++;
//     } else {

//       i++;
//     }
//   }
//   return ans;
// }
// int count_inversion(vector<int> a) {

//   vector<int> left, right;
//   int len = a.size();
//   if (len == 1) {
//     return 0;
//   }
//   for (int i = 0; i < len / 2; i++) {
//     left.push_back(a[i]);
//   }
//   for (int i = len / 2; i < len; i++) {
//     right.push_back(a[i]);
//   }
//   return (count_inversion(left) + count_inversion(right) +
//           count_split_inv(left, right));
// }
// int main() {
//   vector<int> a = {1, 3, 22, 49, 4, 5};
//   cout << count_inversion(a) << endl;

//   return 0;
// }

// #include <bits/stdc++.h>
// using namespace std;

// typedef long long ll;

// // Function to count inversions and return the sorted array as well
// pair<int, vector<int>> count_inversion(vector<int> a) {
//   size_t len = a.size();
//   if (len <= 1)
//     return {0, a}; // Base case: single element is already sorted

//   size_t mid = len / 2;
//   vector<int> left(a.begin(), a.begin() + mid);
//   vector<int> right(a.begin() + mid, a.end());

//   // Recursively count inversions in each half
//   auto [inv_left, sorted_left] = count_inversion(left);
//   auto [inv_right, sorted_right] = count_inversion(right);

//   // Count split inversions while merging the sorted halves
//   int split_inv = 0;
//   vector<int> merged;
//   size_t i = 0, j = 0;
//   while (i < sorted_left.size() && j < sorted_right.size()) {
//     if (sorted_left[i] <= sorted_right[j]) {
//       merged.push_back(sorted_left[i]);
//       i++;
//     } else {
//       merged.push_back(sorted_right[j]);
//       split_inv +=
//           sorted_left.size() - i; // All remaining elements in left >
//           right[j]
//       j++;
//     }
//   }
//   while (i < sorted_left.size())
//     merged.push_back(sorted_left[i++]);
//   while (j < sorted_right.size())
//     merged.push_back(sorted_right[j++]);

//   return {inv_left + inv_right + split_inv, merged};
// }

// int main() {
//   vector<int> a = {1, 3, 22, 49, 4, 5};
//   cout << count_inversion(a).first << endl;
//   return 0;
// }

#include <bits/stdc++.h>
using namespace std;

typedef long long ll;

ll merge_and_count(vector<int> &a, vector<int> &temp, int left, int mid,
                   int right) {
  ll inv_count = 0;
  int i = left, j = mid, k = left;

  while (i < mid && j < right) {
    if (a[i] <= a[j]) {
      temp[k++] = a[i++];
    } else {
      temp[k++] = a[j++];
      inv_count += mid - i; // All elements remaining in left half > a[j]
    }
  }

  while (i < mid)
    temp[k++] = a[i++];
  while (j < right)
    temp[k++] = a[j++];

  for (int idx = left; idx < right; idx++) {
    a[idx] = temp[idx];
  }

  return inv_count;
}

ll count_inversions(vector<int> &a, vector<int> &temp, int left, int right) {
  if (right - left <= 1)
    return 0;
  int mid = (left + right) / 2;
  ll inv_count = 0;
  inv_count += count_inversions(a, temp, left, mid);
  inv_count += count_inversions(a, temp, mid, right);
  inv_count += merge_and_count(a, temp, left, mid, right);
  return inv_count;
}

int main() {
  vector<int> a = {1, 3, 22, 49, 4, 5};
  vector<int> temp(a.size());
  cout << count_inversions(a, temp, 0, a.size()) << endl;
  return 0;
}
