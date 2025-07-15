//! Reverse the Array without using any extra array
//* Using Two Pointer

#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> arr;
    arr = {2,5,2,7,8,9,0,3,45,6};

    int left = 0;
    int right = arr.size() -1;

    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }

    cout<<"New Reverse Array: ";
    for(int i=0 ; i<arr.size(); i++){
        cout<<arr.at(i)<<" ";
    }

    return 0;

    
}