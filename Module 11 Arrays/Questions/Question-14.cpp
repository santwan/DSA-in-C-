//! sort the array of 0's and 1's
//? the array is made of only 0 and 1 and we are asked to sort the array
//* Cannot use inbuilt sort or any sorting technique
//* required time complexity : O(n)

#include<bits/stdc++.h>
using namespace std;

/* 
    ? Method - 01 : two pass method
    * In the first pass count the number of 0s and 1s in the array
    * in the second pass rewrite the array elements using the count and limit 
*/
void twoPassArray(vector<int> &arr){
    int no_of_0 = 0;
    int no_of_1 = 0;

    for(int i = 0; i < arr.size(); i++ ){
        if(arr[i] == 0 ){
            no_of_0++;
        } else {
            no_of_1++;
        }
    }

    // 2nd pass
    for(int i = 0; i < arr.size(); i++ ){
        if(i < no_of_0) arr[i] = 0;
        else arr[i] = 1;
    }
}


/*
    ? Method - 02: if you are only allowed to traverse the array one time
    * Hint - Use of Two Pointer just like reversal of the array
 
*/

void twoPointerArray(vector<int> &arr){
    int right = arr.size() -1;
    int left = 0;

    while(left < right){
        // if(arr[left] == 0 ) {
        //     left++;
        // } 
        // if(arr[right] == 1){
        //     right--;
        // }

        if(arr[left] == 1 && arr[right] == 0){
            swap(arr[left], arr[right]);
            right--;
            left++;
        } else if(arr[left] == 0 )  
            left++;
          else if(arr[right] == 1)
            right--;
        

    }
}

int main(){
    vector<int> arr;
    arr = {1,1,0,1,0,1,1,0};
    
    // twoPassArray(arr);
    twoPointerArray(arr);

    for(int i = 0; i < arr.size(); i++ ){
        cout<<arr.at(i)<<" ";
    }


    return 0;


}