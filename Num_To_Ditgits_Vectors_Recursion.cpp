#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Num_To_Digits(int num,vector<int> &ans,int size){
    if(size < 0) return;
    ans[size] = num % 10;
    return Num_To_Digits(num/10,ans,size-1); 
}

int main(){
    int num;
    cin>>num;
    int copy = num;
    int len = 0;
    while(copy > 0){
        len++;
        copy = copy/10;
    }
    vector<int> ans(len,0);
    Num_To_Digits(num,ans,len-1);
    for(auto i : ans){
        cout<<i<<" ";
    }
}