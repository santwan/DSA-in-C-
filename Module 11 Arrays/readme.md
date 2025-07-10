# 📦 Module 11: Arrays

## 📘 Questions List

<div style="border: 1px solid rgb(213, 255, 1) ; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-1.cpp">Question 1 – Calculate the Sum of All Elements</a></h3>
</div>

<div style="border: 1px solid #ccc; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-2-Linear-Search.cpp">Question 2 – Linear Search</a></h3>
</div>

<div style="border: 1px solid #ccc; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-3.cpp">Question 3 – Find the Maximum Value</a>
  </h3>
</div>

  <details>
    <summary><strong>Algo & Approach</strong></summary>

    ### 1. Linear Scan

    - Assume the first element is the maximum.
    - Traverse the array from left to right.
    - If any element is greater than the current maximum, update it.
    - At the end, the maximum value will be stored.

    ```cpp
    max = arr[0] or max = INT_MIN
    for( from i=0 to i<arr.length ){
        if( max < arr[i]){
            update max = arr[i]
        }
    }
    ```

    **Time Complexity:** O(n)  
    **Space Complexity:** O(1)  
    **Best when:** You want the most efficient solution.

    ---

    ### 2. Using Sorting

    - Sort the array in ascending order.
    - After sorting, the last element will be the maximum.
    - Simply return the last element.

    **Time Complexity:** O(n log n)  
    **Space Complexity:** O(1)  
    **Best when:** You already need the array sorted for other reasons.
  </details>

