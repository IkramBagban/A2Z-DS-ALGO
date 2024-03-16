<details>
  <summary>Left Rotate an Array by One - <a href="https://www.codingninjas.com/studio/problems/left-rotate-an-array-by-one_5026278?utm_source=striver&utm_medium=website&utm_campaign=a_zcoursetuf&leftPanelTabValue=PROBLEM">Coding Ninja</a></summary>
  
  <!-- Your content goes here -->
## Problem statement
Given an array 'arr' containing 'n' elements, rotate this array left once and return it.

Rotating the array left by one means shifting all elements by one place to the left and moving the first element to the last position in the array.

Example:
Input: 'a' = 5, 'arr' = [1, 2, 3, 4, 5]

Output: [2, 3, 4, 5, 1]

Explanation: We moved the 2nd element to the 1st position, and 3rd element to the 2nd position, and 4th element to the 3rd position, and the 5th element to the 4th position, and move the 1st element to the 5th position.

</details>

<details>
  <summary>
  <b>Intuition:</b>

  </summary>
    To rotate the array left by one position, we can follow a simple approach:

    1. Store the first element of the array in a temporary variable.
    2. Shift all elements one position to the left.
    3. Place the stored first element in the last position of the array.
</details>
<details>
  <summary>
    <b>Approach:</b>:
  </summary>
* Store the first element of the array in a variable firstElement.
* Iterate through the array from index 0 to n-1.
* Replace each element at index i with the element at index i+1.
* Place the firstElement at the last position of the array, i.e., at index n-1.
* Return the modified array.
</details>

```cpp
vector<int> rotateArray(vector<int>& arr, int n) {
    int firstElement = arr[0]; // Store the first element

    // Shift all elements one position to the left
    for(int i = 0; i < n; i++){
        arr[i] = arr[i + 1];
    }

    arr[n - 1] = firstElement; // Place the first element at the last position

    return arr; // Return the modified array
}

```

This approach ensures that the array is rotated left by one position, as required.
