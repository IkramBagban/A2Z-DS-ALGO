26. Remove Duplicates from Sorted Array <a href="https://leetcode.com/problems/remove-duplicates-from-sorted-array/description/">Leetcode</a> <br />

## Brute Force
```cpp
class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        queue<int> q;
        q.push(nums[0]);
        for (int i = 1; i < nums.size(); i++) {
            if (q.back() != nums[i]) {
                q.push(nums[i]);
            }
        }

        int index = 0;
        while (!q.empty()) {
            nums[index++] = q.front();
            q.pop();
        }

        return index;
    }
};

```


## Optimal approach'
### 2 pointer approch
```cpp
  int index = 1;
      int uniqueElementIdx = 0;
        while(index < nums.size()){
            if(nums[uniqueElementIdx] != nums[index]){
                uniqueElementIdx++;
                nums[uniqueElementIdx] = nums[index];
            }
            index++;
        }

        return uniqueElementIdx + 1;
```