//! Calculate the sum of all the elements in the given array.

#include<iostream>
using namespace std;
int main() {
    int n;
    cout<<"Enter the size of the Array: ";
    cin>>n;

    int arr[n];
    
    cout<<"Enter the elements in the array: ";
    for( int i=0; i< n; i++){
        cout<<"Enter the "<<(i+1)<<"th element: ";
        cin>>arr[i];
    }

    int sum = 0;
    for( int i =0; i< n; i++){
        sum = sum + arr[i];
    }
    cout<< "Sum of All the Element : "<<sum;

    return 0;
}