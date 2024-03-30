#include<bits/stdc++.h>
#include<iostream>
using namespace std;

int Max_Element(vector<int> &arr,int index,int n,int &maxi){
    if(index >= n) return maxi;
    if(arr[index] > maxi){
        maxi = arr[index];
    }
    return Max_Element(arr,index+1,n,maxi);
}

int main(){
    vector<int> arr{10,1111,12,13,14,15,150,250,333,33};
    int maxi = INT_MIN;
    cout<<Max_Element(arr,0,10,maxi);
    return 0;
}