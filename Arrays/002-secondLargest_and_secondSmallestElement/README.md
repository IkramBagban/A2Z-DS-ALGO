<a href="https://www.codingninjas.com/studio/problems/largest-element-in-the-array-largest-element-in-the-array_5026279?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=SUBMISSION">Question Link</a> <br /><br />
### **Brute Force Approach for Second Largest and Second Smallest Elements:**

This approach sorts the array in ascending order and then directly accesses the second largest and second smallest elements based on their positions in the sorted array.

1. Sort the array in ascending order.
2. The second largest element is at position **`n-2`** (since the largest is at **`n-1`**).
3. The second smallest element is at position **`1`** (since the smallest is at **`0`**).
4. Return both elements in an array.

**Time Complexity**: O(n log n) - Due to the sorting step.<br />
**Space Complexity**: O(1) - In-place sorting is used (ignoring the space used by the sorting algorithm itself).

```
#include <bits/stdc++.h>
using namespace std;

vector<int> getSecondOrderElements(int n, vector<int> arr) {
    std::sort(arr.begin(), arr.end());

    int secondLargest = arr[n-2];
    int secondSmallest = arr[1];
    vector<int> answerArray(2);
    answerArray[0] = secondLargest;
    answerArray[1] = secondSmallest;

    return answerArray;
}

```

## Optimal Approach

**Time Complexity**: O(n)  
**Space Complexity**: O(1)

This approach iterates through the array once to find the second largest and second smallest elements simultaneously.

```cpp
vector<int> getSecondOrderElements(int n, vector<int> arr) {
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int smallest = INT_MAX;
    int secondSmallest = INT_MAX;

    for(int i = 0; i < n; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if(arr[i] > secondLargest) {
            secondLargest = arr[i];
        }

        if(arr[i] < smallest) {
            secondSmallest = smallest;
            smallest = arr[i];
        } else if(arr[i] < secondSmallest) {
            secondSmallest = arr[i];
        }
    }

    vector<int> answerArrar(2);
    answerArrar[0] = secondLargest;
    answerArrar[1] = secondSmallest;

    return answerArrar;
}
