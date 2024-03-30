#include<bits/stdc++.h>
#include<iostream>
using namespace std;

bool Check_Sorted(vector<int> &arr,int size,int index){
    if(index >= size) return true;
    if(arr[index] < arr[index-1]) return false;
    return Check_Sorted(arr,size,index+1);
}

int main() {
    vector<int> arr{10,25,30,50,60,60};
    int size = 6;
    int index = 1;
    if(Check_Sorted(arr,size,index)){
        cout<<"yes Array is Sorted";
    }
    else{
        cout<<"no Array is not Sorted";
    }
}