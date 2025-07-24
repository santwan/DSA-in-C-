/*
    ! Question 17:
    ? Merge two sorted arrays into a single sorted array. assuming both arrays are sorted in non-decreasing order. One array has enough space to hold the elements of both arrays. You cannot use any additional space for the merged array.
    * Expected Time Complexity: O(n + m), where n and m are the sizes of the two arrays.
    ? LeetCode Problem No: 88 (Merge Sorted Array)

    Expected Input/Output:
    Input:  nums1 = [1, 2, 3, 0, 0, 0], m = 3, nums2 = [2, 5, 6], n = 3
    Output: [1, 2, 2, 3, 5, 6]

    ! Brute force approach:
    1. Just copy the elements of nums2 into nums1 and then sort nums1. assuming nums1 has enough space to hold the elements of both arrays.

    2. This approach has a time complexity of O((n + m) log(n + m)) due to the sorting step, which is not optimal for this problem.

    ! Optimal Approach:
    * Merge the two arrays in reverse order to avoid overwriting elements in nums1.
    1. Start from the end of both arrays and compare the elements.
    2. Place the larger element at the end of nums1 and move the pointers accordingly.
    3. Continue this process until all elements from either nums1 or nums2 have been merged.
    4. If there are any remaining elements in nums2, copy them to nums1.

    ? pseudo code:
    *1. Initialize pointers:
       - i = m - 1 (last element of nums1)
       - j = n - 1 (last element of nums2)
       - k = m + n - 1 (last position in nums1)
    *2. While i >= 0 and j >= 0:
       - If nums1[i] > nums2[j], then nums1[k] = nums1[i] and decrement i and k.
       - Else, nums1[k] = nums2[j] and decrement j and k.
    *3. If there are any remaining elements in nums2, copy them to nums1. 
    *4. If there are remaining elements in nums1, they are already in place.


    ! Note: This approach modifies nums1 in place and does not require additional space for the merged array.
*/ 
//*============================================================================================================

#include <iostream>
using namespace std;

void mergeSortedArrays(int nums1[], int m, int nums2[], int n) {
    int i = m - 1; // Last element of nums1
    int j = n - 1; // Last element of nums2
    int k = m + n - 1; // Last position in nums1

    // Merge in reverse order
    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];
            i--;
        } else {
            nums1[k] = nums2[j];
            j--;
        }
        k--;
    }

    // Copy any remaining elements from nums2
    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }
}

int main() {
    int nums1[] = {1, 2, 3, 0, 0, 0}; // Example input
    int m = 3; // Number of elements in nums1 before merging
    int nums2[] = {2, 5, 6}; // Second sorted array
    int n = 3; // Number of elements in nums2

    mergeSortedArrays(nums1, m, nums2, n);

    cout << "Merged array: ";
    for (int i = 0; i < m + n; i++) {
        cout << nums1[i] << " ";
    }
    cout << endl;

    return 0;
}
