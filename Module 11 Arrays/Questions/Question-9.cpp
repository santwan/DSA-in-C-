//! Finding the Last occurrence of x

//? Very simple to do 
// Loop through the array from backward postion 
// whenever the element encountered , just return LOL !!!!

#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v ={2,3,456,7,8,9,54,32,1,3,4};

    int x; 
    cout<<"Enter the element to find it's last occurence in the array: ";
    cin>>x;

    for(int i=v.size()-1; i>=0; i--){
        if(v[i] == x){
            cout<<i<<endl;
            break;
        }
    }
    return 0;
}