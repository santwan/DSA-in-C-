//! Finding the smallest missing positive element in the sorted array that contains only positive element. 



#include<bits/stdc++.h>
using namespace std;

//? Using Brute Force Appraoch
/*
int findMissingBrute(int arr[], int n) {
    int expected = 1;

    for (int i = 0; i < n; i++) {
        if (arr[i] != expected) {
            return expected;
        }
        expected++;
    }

    return expected=-1;
}
*/

//* Optimal appraoch using Binary Search
int findMissingOptimal(int arr[], int n){
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;

        // At position i, we expect value = i + 1
        if (arr[mid] == mid + 1) {
            low = mid + 1;
        } else {
            high = mid - 1;
        }
    }

    if( low == n ){
        return -1;
    }

    return low + 1;
}

int main(){
    int arr[] = {1,2,3,4,5,6 };
    int n = sizeof(arr)/sizeof(arr[0]);

    // int missing = findMissingBrute(arr, n);
    int missing = findMissingOptimal(arr, n);
    if(missing == -1){
        cout<< "No missing smallest element found";
    }
    else cout << "Smallest missing positive element (Brute): " << missing << endl;

}

