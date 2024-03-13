void insertionSort(int arr[], int n)
{
    //write your code here
    for(int i = 0; i< n ; i++){   
        int j = i;
        while(arr[j] > arr[j+1] && j < n - 1){ // j < n - 1 is very important in here.
            int temp = arr[j];
            arr[j] = arr[j+1];
            arr[j+1] = temp;
            j--;
        }
    }
}


The Insertion Sort algorithm is a simple sorting algorithm that builds the final sorted array (or list) one item at a time. It is much less efficient on large lists than more advanced algorithms such as quicksort, heapsort, or merge sort. However, insertion sort provides several advantages: it is simple to understand and implement, efficient for small data sets, and adaptive, meaning it works well when the data is already partially sorted.

Here's how the algorithm works:
1. **Starting from the Second Element**: The algorithm starts with the second element of the array. It considers the first element to be a sorted section of the array of length 1.
2. **Compare and Insert**: The current element (the one that the iteration is on) is compared with the elements in the sorted part of the array (to the left of the current element). The algorithm searches for the correct position to insert the current element by moving backwards through the sorted part.
3. **Shifting Elements**: If the current element is smaller than an element in the sorted part, that element is shifted to the right. This process continues until the algorithm finds the correct position for the current element.
4. **Insertion**: Once the correct position is found, the current element is placed into its correct position in the sorted section.
5. **Repeat Until Sorted**: The algorithm repeats this process for each element in the array until the entire array is sorted.