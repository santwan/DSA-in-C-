/*
    ! Question 18 
    ! Find the next permutation of a given array of integers.
    * The next permutation is the next lexicographically greater permutation of the array.  
    * If no such permutation exists, the array is sorted in ascending order.
    * The algorithm should modify the array in place and use O(1) extra space.
    * Time complexity: O(n)
    * Space complexity: O(1)
    ? LeetCode Problem No: 31 (Next Permutation)
    * Expected Input/Output:
    Input: nums = [1, 2, 3]
    Output: [1, 3, 2]


    
    ! Algorithm:
    1. Find the pivot:
       - Traverse the array from right to left and find the first pair of adjacent elements (i, i+1) such that nums[i] < nums[i+1]. This index i is the pivot.
    2. Find the successor:
       - Traverse the array from right to left and find the first element that is greater than nums[pivot]. This index j is the successor.
    3. Swap the pivot and successor:
       - Swap the elements at indices i and j.
    4. Reverse the suffix:
       - Reverse the subarray that starts at index i+1 and goes to the end of the array.
    5. The modified array is the next permutation.

    ? Meaning of pivot and successor:
    * Pivot: The largest index i such that nums[i] < nums[i + 1]. This is the point where the order of the array can be changed to find the next permutation.

    * Successor: The smallest index j such that nums[j] > nums[i]. This is the element that will be swapped with the pivot to create a larger permutation.

    * The next permutation is obtained by swapping the pivot with the successor and then reversing the suffix
    
    * suffix: The subarray that starts at index i + 1 and goes to the end of the array. This part of the array is reversed to ensure that the next permutation is the smallest possible permutation that is greater than the current one. 
    * This ensures that the next permutation is the smallest possible permutation that is greater than the current one.
    * This is because the suffix is in descending order, and reversing it will give us the smallest possible order for that part of the array.  
    * This is the key step that ensures we get the next permutation in lexicographical order.

*/