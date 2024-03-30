#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void double_Array(vector<int> &arr,int size,int index){
    if(index >= size) return;
    arr[index] *=2;
    return double_Array(arr,size,index+1);
}

int main(){
    vector<int> arr{10,1111,12,13,14,15,150,250,333,33};
    double_Array(arr,10,0);
    for(auto i : arr){
        cout<<i<<" ";
    }
    return 0;
}