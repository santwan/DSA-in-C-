/*
    ! Move all the nagative numbers to the beginning of the array and positive numbers to the end of the array.
    * Given an array of integers, rearrange the elements such that all negative numbers appear before all positive numbers.
    * The order of negative and positive numbers should be preserved.
    * You cannot use any sorting 
    * time complexity O(n)
*/

/*
    ? Approach: Just like the question of sorting the array of o and 1s only
    *  
*/

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int>& arr){
    int left = 0;
    int right = arr.size() - 1;

    while( left < right ){
        if( arr[left] >= 0 && arr[right] < 0 ){
            swap(arr[left], arr[right]);
            left++;
            right--;
        } else if( arr[left] < 0 ){
            left++;
        } else if( arr[right] >= 0 ){
            right--;
        }
    }
}


#include<bits/stdc++.h>
using namespace std;

int main() {
    vector<int> arr;

    arr = {-9,0,-2,4,6,7,-3,-1,0};

    for(int i = 0; i<arr.size(); i++ ){
        cout<<arr.at(i)<<" ";
    }

    reverseArray(arr);
    cout<<endl;

    for(int i = 0; i<arr.size(); i++ ){
        cout<<arr.at(i)<<" ";
    }
}