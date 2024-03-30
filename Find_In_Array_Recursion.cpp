#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Search(vector<int> &arr,int size,int index,int &target){
    if(index >= size) return -1;
    if(arr[index] == target) return index;
    return Search(arr,size,index+1,target);
}

int main(){
    vector<int> arr{10,1111,12,13,14,15,150,250,333,33};
    int target = 16;
    cout<<Search(arr,10,0,target);
    return 0;
}