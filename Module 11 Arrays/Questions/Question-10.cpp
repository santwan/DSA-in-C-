//! Two Sum problem
//! Find the doublet in the array whose sum is equal to the given value x
//! and also find the indexes of those doublet

//========================================================================
//*            Using BRUTE FORCE APPROACH 
//========================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cout<<"Enter Target element X: ";
    cin>>x;

    vector<int> v;
    v = {2,3,7,0,1,6,4,8,10,3};

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if( v[i] + v[j] == x ){
                cout<<"Indicies: "<<i<<" "<<j<<" ";
                cout<<endl;
            }
        }
    }

    return 0;
}




//========================================================================
//*                     BETTER  APPROACH (Hashmap)
//========================================================================
#include<bits/stdc++.h>
using namespace std;
int main(){

    int x;
    cout<<"Enter Target element X: ";
    cin>>x;

    vector<int> v;
    v = {2,3,7,0,1,6,4,8,10,3};

    for(int i=0; i<v.size(); i++){
        for(int j=i+1; j<v.size(); j++){
            if( v[i] + v[j] == x ){
                cout<<"Indicies: "<<i<<" "<<j<<" ";
                cout<<endl;
            }
        }
    }

    return 0;
}