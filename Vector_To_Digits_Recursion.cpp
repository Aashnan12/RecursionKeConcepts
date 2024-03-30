#include<bits/stdc++.h>
#include<iostream>
using namespace std;

void Vector_To_Num(vector<int> &arr,int &num,int index,int size){
    if(index >= size) return;
    num = num*10+arr[index];
    Vector_To_Num(arr,num,index+1,size);
}

int main(){
    vector<int> arr{4,1,3,5};
    int num = 0;
    Vector_To_Num(arr,num,0,arr.size());
    cout<<num;
}