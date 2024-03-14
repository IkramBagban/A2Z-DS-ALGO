<a href="bit.ly/4ceoJKa">Check Sorted Array (Coding Ninja)</a> <br />
<a href="https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/description/">1752. Check if Array Is Sorted and Rotated</a> <br />

## 1) Check Sorted Array (Coding Ninja)
**Time Complexity**: O(n)  
**Space Complexity**: O(1)
```cpp
int isSorted(int n, vector<int> a) {
    for(int i = 0; i< n - 1; i++){
        if(a[i] > a[i+1]){
            return 0;
        }
    }
    return 1;

}
```

## 2) 1752. Check if Array Is Sorted and Rotated (Leetcode)
**Intuition:**
We want to determine if the array is nearly sorted or not. If the array breaks its ascending order only once or not at all, it's considered nearly sorted. Otherwise, it's not.

**Approach:**

1. **Case 1 - Properly Sorted Array:**
If the array is already sorted, it's almost sorted. We check if the last element is greater than the first one to handle the case when the array is circular (e.g., [9, 1, 2, 3, 4]). If the last element is greater, it means the array is nearly sorted, so we increment **`cnt`** by 1.
2. **Case 2 - Sorted but Rotated Array:**
If the array is sorted but rotated, it's still considered nearly sorted. We iterate through the array and count how many times the ascending order breaks. However, if the first element is greater than the last one, it indicates a rotation. In this case, we don't increase **`cnt`** because the array is nearly sorted after the rotation.
3. **Case 3 - All Elements Equal:**
If all elements in the array are the same, it's also considered nearly sorted. In this case, **`cnt`** remains 0.

**Explanation:**
If **`cnt`** is less than or equal to 1, it means the array is nearly sorted and we return true. Otherwise, we return false.

```cpp
bool isNearlySorted(vector<int>& nums) {
    int n = nums.size();
    int cnt = 0; // Counter to track how many times ascending order breaks

    // Case 1: Properly Sorted Array
    if (nums[n - 1] > nums[0]) {
        cnt++; // Increment counter if last element is greater than first
    }

    // Case 2: Sorted but Rotated Array
    for (int i = 1; i < n; i++) {
        if (nums[i - 1] > nums[i]) {
            cnt++; // Increment counter if ascending order breaks
        }
    }

    // Case 3: All Elements Equal
    if (nums[n - 1] == nums[0]) {
        cnt = 0; // Reset counter if all elements are equal
    }

    // Return true if array is nearly sorted (cnt <= 1), otherwise false
    return cnt <= 1;
}

```