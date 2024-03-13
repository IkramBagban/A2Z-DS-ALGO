question : <a href="https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION">Link</a> <br /><br />

### **Brute Force Approach:**
1. Sort the array in ascending order.
2. Return the last element (**`arr[n-1]`**) because it is the largest element.

**Time Complexity**: O(n log n) - This is due to the time complexity of the sorting algorithm. <br>
**Space Complexity**: O(1) - The sorting is done in-place, and no additional space is used apart from temporary variables. 

```
#include <bits/stdc++.h>int largestElement(vector<int> &arr, int n) {
    std::sort(arr.begin(), arr.end());
    return arr[n-1];
}

```

### **Optimized Approach:**

Instead of sorting the entire array, this approach scans through the array once to find the largest element.

1. Initialize the largest element as the first element of the array.
2. Iterate through the rest of the array:
    - If an element is greater than the current largest element, update the largest element.
3. Return the largest element after completing the iteration.

**Time Complexity**: O(n) - The function scans through each element of the array once.

**Space Complexity**: O(1) - No additional structures are used, maintaining constant space.

```
#include <bits/stdc++.h>int largestElement(vector<int> &arr, int n) {
    int largest = arr[0];
    for(int i = 1; i < n; i++) {
        if(arr[i] > largest) {
            largest = arr[i];
        }
    }
    return largest;
}
```