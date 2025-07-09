#include <iostream>
#include <vector>
using namespace std;

vector<int> merge(vector<int> arr1, vector<int> arr2) {
  int l1 = arr1.size();
  int l2 = arr2.size();
  vector<int> a;
  int i = 0, j = 0;
  while (i < l1 && j < l2) {
    if (arr1[i] > arr2[j]) {
      a.push_back(arr2[j]);
      j++;
    } else {
      a.push_back(arr1[i]);
      i++;
    }
  }

  while (i < l1) {
    a.push_back(arr1[i]);
    i++;
  }
  while (j < l2) {
    a.push_back(arr2[j]);
    j++;
  }
  return a;
}

vector<int> merge_sort(vector<int> arr) {
  if (arr.size() <= 1)
    return arr;

  int l = arr.size();
  vector<int> b, c;
  for (int i = 0; i < l / 2; i++) {
    b.push_back(arr[i]);
  }
  for (int i = l / 2; i < l; i++) {
    c.push_back(arr[i]);
  }
  return merge(merge_sort(b), merge_sort(c));
}

int main() {
  vector<int> a, ans;
  int len = 10;
  for (int i = len; i > 0; i--) {
    a.push_back(i);
  }

  ans = merge_sort(a);
  for (int i = 0; i < len; i++) {
    cout << ans[i] << ' ';
  }
  cout << endl;
}
