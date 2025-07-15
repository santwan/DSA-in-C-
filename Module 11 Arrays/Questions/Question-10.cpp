//! Two Sum problem
//! Find the doublet in the array whose sum is equal to the given value x
//! and also find the indexes of those doublet

//========================================================================
//*            Using BRUTE FORCE APPROACH 
//========================================================================
/*
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

*/


//========================================================================
//*                     BETTER  APPROACH (Hashmap)
//========================================================================
#include<bits/stdc++.h>
#include <unordered_map>
using namespace std;

void printTwoSumPairsWithIndices(vector<int>& arr, int x) {
    unordered_map<int, int> hashMap; // value -> index

    for (int i = 0; i < arr.size(); i++) {
        int target = x - arr[i];

        if (hashMap.find(target) != hashMap.end()) {
            int j = hashMap[target];  // index of the other element
            cout << "(" << target << ", " << arr[i] << ")  =>  "
                 << "indices: (" << j << ", " << i << ")\n";
        }

        // Store the current number and its index
        hashMap[arr[i]] = i;
    }
}

int main() {
    vector<int> arr = {1, 2, 3, 4, 5, 6, 4};
    int x = 8;

    cout << "Two Sum pairs for target " << x << ":\n";
    printTwoSumPairsWithIndices(arr, x);

    return 0;
}



