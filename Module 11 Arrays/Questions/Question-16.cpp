/*
    ! Sort the array of 0s and 1s and 2s
    * Given an array of integers containing only 0s, 1s, and 2s, sort the array in a single pass.
    * The order of 0s, 1s, and 2s should be preserved.
    * You cannot use any sorting algorithm.
    ? This is question on the leetcode is knwown as "Sort Colors" or "Dutch National Flag Problem".
    * Time complexity: O(n) 


    ! Approach: 
    ? Method - 1: Count the number of 0s, 1s, and 2s in the array and then rewrite the array based on the counts.
    * This method requires two passes through the array.

    ? Method - 2 (which is known as Dutch National Flag Problem) : Use three pointers (low, mid, high) to partition the array into three sections: 0s, 1s, and 2s. 
    * This method requires only one pass through the array.
    * The low pointer tracks the position for 0s, the mid pointer traverses the array, and the high pointer tracks the position for 2s.
    * Time complexity: O(n)
    
    * Detailed Algorithm:
    1. Initialize three pointers: low, mid, and high.
    2. Set low = 0, mid = 0, and high = arr.size() - 1.
    3. Iterate through the array using the mid pointer:
       - If arr[mid] == 0, swap(arr[low], arr[mid]), and increment both low and mid.
       - If arr[mid] == 1, increment mid.
       - If arr[mid] == 2, swap(arr[mid], arr[high]), and decrement high.
    4. Continue this process until mid > high.
*/