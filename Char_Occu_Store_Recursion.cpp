#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Occu(string str,int index,int size,vector<int> &store,char ch){
    if(index >= size) return;
    if(str[index] == ch) store.push_back(index);
    return Occu(str,index+1,size,store,ch);
}

int main(){
    string str = "aashnan";
    int num = 0;
    vector<int> store;
    Occu(str,0,str.size(),store,'a');
    for(auto i : store){
        cout<<i<<" ";
    }
}