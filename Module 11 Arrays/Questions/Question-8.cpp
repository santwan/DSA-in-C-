#include<iostream>
using namespace std;

int main() {
    int arr[] = {3,45,6,78,89,9,0};

    int* p1 = arr;
    cout<<p1<<endl;

    cout<<&arr<<endl;
    cout<<&arr[0]<<endl; 

    //int * p2 = arr[0]; // ❌ this will give error 
    //? Because a arr[0] representing an integer element in the array
    //? And we cannot store a value of type int into a pointer( int * )

    int* p3 = &arr[0];
    cout<<p3<<endl;

    // int* p4 = &arr; ❌
    
}