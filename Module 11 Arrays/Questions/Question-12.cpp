//! Reverse Part of array

#include<bits/stdc++.h>
using namespace std;

void reverseArray(vector<int> &arr, int leftIndex, int rightIndex){
    int left = leftIndex ;
    int right = rightIndex;
    
    while(left<right){
        swap(arr[left], arr[right]);
        left++;
        right--;
    }
}

int main(){
    vector<int> v ;
    v = {2,4,5,6,7,8,9,0,3,45};

    cout<<"Original Array: ";
    for(int i = 0; i< v.size(); i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl;

    int start = 0;
    int end = 10;
    if(end < v.size() ){
        reverseArray(v,start,end);
    }
    else {
        cout<<"Index Out of Bound ";
        return 0;
    }

    cout<<"Reversed Array: ";
    for(int i = 0; i< v.size(); i++){
        cout<<v.at(i)<<" ";
    }
}