# Module 11: Arrays

## Questions

### [Question 1 - Calculate the sum of all the elements in the given array](./Questions/Question-1.cpp)

### [Question 2 - Linear Search](./Questions/Question-2-Linear-Search.cpp)

###

<details>
  <summary><strong>Algo & Approach</strong></summary>

  <pre><code>
//*------------------
//*1. Linear scan   |  
//*------------------

/*
Idea: Iterate through array and track the largest value

Algorithm: 
- start assuming the first element is the MAXIMUM
- Iterate over the array using a loop
- then compare the max with the other element in the array 
- if an element greater than the max is found => then update the max 
- at end , the highest value will be inside the max 

max = arr[0] or max = INT_MIN
for( from i=0 to i<arr.length ){
    if( max < arr[i]){
        update max = arr[i]
    }
}
*/

//? Time Complexity : O(n)
//? Space Complexity: O(1)
//? Most efficient and recommended for real use

//*--------------------
//*2. Using Sorting   |
//*--------------------
/*
Idea: Sort the array and pick the last element

Algorithm: 
- Another way to find the maximum value is by sorting the array.
- Once the array is sorted in ascending order, the last element will be the largest one.
- So I just sort the array and pick the last element to find the max 

sort(array)
max = array[last index]

*/

//?  Time Complexity: O(n logn)  if we are using the best sorting algo 
//?  Space Complexity: O(1)
  </code></pre>
</details>
