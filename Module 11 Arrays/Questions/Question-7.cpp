//! Finding the smallest missing positive element in the sorted array. 
//! Array may contain negative as well as positive element 


#include<bits/stdc++.h>
using namespace std;

int findMissing(int arr[], int n){
    int expected = 1;

    for(int i = 0; i<n; i++){
        if(arr[i] <= 0){
            continue;
        }

        if(arr[i] == expected){
            expected ++;
        } else if(arr[i] > expected){
            // we can do this because the array is sorted in ascending order
            // So current element must be equal to or greater than the expected
            // it cannot be less than the expected
            //* If it is less than the expected then there must be duplicate elements like {1,2,2,3,4}
            //? And if the current element is greater than expected then for sure there is a positive missing element 
            //! for example if the expected is 4 
                //! then the current element can be equal to 4 or greater than 4
                //! IF it is less than 4 then FOR SURE there must be duplicate of previous element 
            return expected;
        } 

        // No need of check the condition for present element < expected
        // It will automatically be skipped if none of the above condition hits true
        // and expected remains unchanged 
    }
    return -1;
}



int main(){
    int arr[] = {-10,-5,-1,0,1,2,3,3,4,5,6,9 };
    int n = sizeof(arr)/sizeof(arr[0]);

    // int missing = findMissingBrute(arr, n);
    int missing = findMissing(arr, n);
    if(missing == -1){
        cout<< "No missing smallest element found";
    }
    else cout << "Smallest missing positive element (Brute): " << missing << endl;

}
