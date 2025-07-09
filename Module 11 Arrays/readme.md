# Module 11: Arrays

## Questions

### [Question 1 - Calculate the sum of all the elements in the given array](./Questions/Question-1.cpp)

### [Question 2 - Linear Search](./Questions/Question-2-Linear-Search.cpp)

### [Question 3 - Find the maximum value element](./Questions/Question-3.cpp)

<details>
  <summary><strong>Algo & Approach</strong></summary>

### 1. Linear Scan

- Assume the first element is the maximum.
- Traverse the array from left to right.
- If any element is greater than the current maximum, update it.
- At the end, the maximum value will be stored.

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
