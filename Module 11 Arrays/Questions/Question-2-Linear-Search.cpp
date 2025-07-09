//? Find the element x in the array. take Array and x as input.

/*
Algo: 
1. Take x that is the element that needs to be find as input from the user 
2. traverse through the array using a loop
3. Apply this logic: 
    if ( arr[i] == x ) print("Element found at ith position in the array")
    else  print("X Element Not found in the array")
*/

//! ================================================================================

#include <iostream> 
using namespace std;

int main() {
    int n;
    cout<<"Enter the size of the array: ";
    cin>> n;

    int arr[n];
    cout<<"Enter the elements in the Array"<<endl;
    for(int i = 0; i<n; i++){
        cout<<"Element no "<<(i+1)<<":";
        cin>>arr[i];
    }

    cout<<"Your Array Is: ";
    for( int i= 0; i<n ; i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;

    //Now Taking input from the user to find an element
    cout<<"Enter the element to Find: ";
    int x;
    cin>>x;
    
    
    //Linear search
    for( int i=0; i<n; i++){
        if(arr[i]==x){
            cout<<"Yes Element "<<x<<" has been found at index no: "<<i;
            return 0;
        }
    }
    cout<<"element not found in the array";
    return 0;

}