#include <iostream>
#include <vector>

using namespace std;
vector<int> merge(vector<int> arr1, vector<int> arr2) {
  int len1 = arr1.size();
  int len2 = arr2.size();
  int i = 0, j = 0;
  vector<int> arr;
  while (i < len1 and j < len2) {
    if (arr1[i] > arr2[j]) {
      arr.push_back(arr2[j]);
      j++;
    } else {
      arr.push_back(arr1[i]);
      i++;
    }
  }
  while (i < len1) {
    arr.push_back(arr1[i]);
    i++;
  }
  while (j < len2) {
    arr.push_back(arr2[j]);
    j++;
  }
  return arr;
}

vector<int> mergesort(vector<int> arr) {

  int len = arr.size();
  if (len <= 1) {
    return arr;
  }
  vector<int> b, c;
  for (int i = 0; i < len / 2; i++) {
    b.push_back(arr[i]);
  }
  for (int i = (len / 2); i < len; i++) {
    c.push_back(arr[i]);
  }
  return merge(mergesort(b), mergesort(c));
}

int main() {
  vector<int> a, p;
  int n, x;
  cin >> n;
  for (int i = 0; i < n; i++) {
    cin >> x;
    a.push_back(x);
  }
  p = mergesort(a);
  for (int i = 0; i < n; i++) {
    cout << p[i] << ' ';
  }
  cout << endl;
}
// namespace std;
