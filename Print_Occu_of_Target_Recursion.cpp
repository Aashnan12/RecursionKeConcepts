#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Print_Occu(vector<int> &arr,int &size,int index,int &key){
    if(index >= size) return;
    if(arr[index] == key) cout<<index<<" ";
    return Print_Occu(arr,size,++index,key);
}

int main(){
    vector<int> arr{10,22,12,13,1,22,4,45,22,12};
    int size = 10;
    int key = 22;
    Print_Occu(arr,size,0,key);
}