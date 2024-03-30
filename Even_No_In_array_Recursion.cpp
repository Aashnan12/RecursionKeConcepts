// 10 11 12 13 14
// 10 12 14 ko array mai daldo mtlb even no array mai daldo recursion se.

#include<iostream>
#include<vector>
using namespace std;

void Even_Array(vector<int> &arr,vector<int> &even,int index,int n){
    if(index >= n) return;
    if((arr[index] & 1) == 0){
        even.push_back(arr[index]);
    }
    return Even_Array(arr,even,index+1,n);
}

int main(){
    vector<int> arr{10,11,12,13,14,15,150,250,333,33};
    vector<int> even;
    Even_Array(arr,even,0,10);
    for(auto i : arr){
        cout<<i<<" ";
    }
    cout<<endl;
    for(auto i : even){
        cout<<i<<" ";
    }
    return 0;
}