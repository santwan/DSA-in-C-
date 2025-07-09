//? Find the maximum value out of all the elements in the Array

//! Algo & Approach
//!```````````````````````````````````````````````````````````````````````````````
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
//? Most efficient and recommmed for real use

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



//! ```````````````````````````````````````````````````````````````````````````````````````````````

//! Coding using Linear scan

#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int main(){
    int n;
    cout<<"Enter the size of the array: ";
    cin>>n;

    int arr[n];
    for(int i=0; i<n; i++){
        cout<<"Enter element "<<(i+1)<<" : ";
        cin>>arr[i];
    }

    int max = INT_MIN;
    for( int i=0; i<n; i++){
        if(max < arr[i]){
            max = arr[i];
        }
    }
    cout<<"Largest Element: "<<max;
}
