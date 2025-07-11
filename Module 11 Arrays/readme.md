# 📦 Module 11: Arrays

## 📘 Questions List

<div style="border: 1px solid rgb(213, 255, 1) ; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-1.cpp">Question 1 – Calculate the Sum of All Elements</a></h3>
</div>

<div style="border: 1px solid #ccc; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-2-Linear-Search.cpp">Question 2 – Linear Search</a></h3>
</div>

<div style="border: 1px solid #ccc; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-3.cpp">Question 3 – Find the Maximum Value</a></h3>
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

</div>


<div style="border: 1px solid #ccc; border-radius: 8px; padding: 12px; margin-bottom: 16px; background-color: #f9f9f9;">
  <h3>🔹 <a href="./Questions/Question-4.cpp">Question 4 – Second Largest Element in Array</a></h3>
<details>
  <summary><strong>Algo & Approach</strong></summary>

### 1. Brute Force Approach

**How am I thinking to solve this problem**  
> To find the second largest element in an array, I’ll first sort it in ascending order.  
> After sorting, the last element is the largest.  
> Then I’ll scan backward to find the next smaller unique number — that’s my second largest.

- Sort the given array in a particular order 
- then Take the last element as largest element 
- Traverse the array using a loop 
- Start the loop from the backward second last element 
- Compare with the second largest element with other element one by one 
- And also check if the current element is not equal to the largest element
- Assign it if condition hits true and immediately terminate the loop because the array was already sorted.

```cpp
sort( arr )
max = arr [arr.length - 1]
for( int i = arr.length - 2 to 0 ){
  if(secMax < arr[i] && arr[i] != max){
    secMax = arr[i];
    return secMax;
  }
  return -1 if no second largest element found
}
```

**Time Complexity:** O(n logn) due to use sorting  
**Space Complexity:** O(1)  

---

### 2. Optimal Approach

**How am I thinking to solve this problem**  
> “Instead of sorting, I’ll find the largest and second largest in a single pass.
> I’ll initialize two variables: max and secMax.
> While iterating, I update max if I find a new max,
> and update secMax when I find a number less than max but greater than present element in the array.”

- Initialize two variable max and secMax
- Traverse the array using a loop from the start to end 
- if: max < current element 
  - then I will update max to current element
  - and secMax = max because if new largest element that is greater than the max have found then definitely the value inside the current max becomes second largest in the array. So this step needs to be done first inside the if condition before assigning the current element to max. Otherwise second largest value wil be lost.
- else: Check whether the secMax < current element && current element != max
  - then assign the current element to secMax
- End of the loop
- return secMax

``` cpp
int max , secMax = INT_MIN
for( int i = 0 to arr.size()-1 ){
  if( arr[i] > max ){
    secMax = max
    max = arr[i]
  }
  else {
    if(secMax < arr[i] && arr[i] != max ){
      secMax = arr[i]
    }
  }
  return secMax;
}

```
### Edge Cases 
- All the elements are equal
  - No Second largest element exist return -1
- Only one element in the array
  - return -1


**Time Complexity:** O(n)  
**Space Complexity:** O(1)  
</details>
</div>


### [🔹 Question 5 - Given an array. predict if the array contains duplicate or not](./Questions/Question-5.cpp)
<details>
  <summary><strong>Algo & Approach</strong></summary>

## 1. Brute Force Approach

**How am I thinking to solve this problem**  
> “I’ll compare every element with every other element using two nested loops.
> If I ever find two elements that are the same, I return true.
> If I finish both loops and don’t find any match, I return false.”

- Loop through the array using index i
- for every run another loop inside the outer loop
  - Run the loop from j = i+1 to arr.size() - 1
    - Compare arr[i] with every arr[j]
    - if match found then return true and break the loop immediately 
  - End of the inner loop
- End of the outer loop
- Return false by default if no duplicate found

```cpp
int n = arr.size()
for ( int i = 0 to n-1){
  for ( int j = i+1 to n-1 ){
    if( arr[i] == arr[j]){
      return false
    }
  }
}
return false
```
### Time Complexity: O(n²)
### Space Complexity:  O(1)  

---

## 2. Optimal Approach ( using hashing )

**How am I thinking to solve this problem**  
> “To make it efficient, I’ll use a hash set.
> I’ll scan each element and check if it already exists in the set.
> If it does, it’s a duplicate → return true.
> If not, I add it to the set.
> If I finish the loop without finding a duplicate, return false.”


- Initialize an empty hash set.
- Loop through each element in the array.
- If the element already exists in the set → return true.
- Otherwise, insert the element into the set.
- After the loop, return false.



``` cpp
1. Initialize set = {}
2. for i = 0 to n-1:
3.     if arr[i] in set:
4.         return true
5.     else:
6.         insert arr[i] into set
7. return false

```

### Time Complexity: O(n)
  - #### Because we loop through the array once , and each insert and find operation in the hash set takes O(1) on average
### Space Complexity: O(n)   
  - #### Because in the worst case (no duplicates), we store all n elements in the set.
</details>



### [🔹 Question 6 - Finding the smallest missing postive element in the sorted array that contains only positive elements](./Questions/Question-6.cpp)
<details>
  <summary><strong>Algo & Approach</strong></summary>

## 1. Brute Force Approach

**How am I thinking to solve this problem**  
> 

- Loop through the array using index i


```cpp


```
### Time Complexity: O()
### Space Complexity:  O()  

---

## 2. Optimal Approach ( using hashing )

**How am I thinking to solve this problem**  
> 


- Initialize 



``` cpp


```

### Time Complexity: O(n)
  - #### Because we loop through the array once , and each insert and find operation in the hash set takes O(1) on average
### Space Complexity: O(n)   
  - #### Because in the worst case (no duplicates), we store all n elements in the set.
</details>




### [🔹 Question 5 - Given an array. predict if the array contains duplicate or not](./Questions/Question-5.cpp)
<details>
  <summary><strong>Algo & Approach</strong></summary>

## 1. Brute Force Approach

**How am I thinking to solve this problem**  
> 

- Loop through the array using index i


```cpp


```
### Time Complexity: O()
### Space Complexity:  O()  

---

## 2. Optimal Approach ( using hashing )

**How am I thinking to solve this problem**  
> 


- Initialize 



``` cpp


```

### Time Complexity: O(n)
  - #### Because we loop through the array once , and each insert and find operation in the hash set takes O(1) on average
### Space Complexity: O(n)   
  - #### Because in the worst case (no duplicates), we store all n elements in the set.
</details>