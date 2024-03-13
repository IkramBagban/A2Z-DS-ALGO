
**Brute Force**
1) sort the array in Ascending order
2) return the arr[n-1] element. because it is the largest element  <br />
**Time Complexity** : O(n log n) <br />
**Space Complexity** O(1)  <br />
```
#include <bits/stdc++.h> 
int largestElement(vector<int> &arr, int n) {
    // Write your code here.
    std::sort(arr.begin(), arr.end());
    return arr[n-1];
}
```