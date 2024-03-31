#include<iostream>
#include<vector>
using namespace std;

void subsequence(string str,string output,vector<string> &ans,int index){
    if(index >= str.size()){
        ans.push_back(output);
        return ;
    }

    // Exclude
    subsequence(str,output,ans,index+1);

    // Include
    output.push_back(str[index]);
    subsequence(str,output,ans,index+1);
}

int main(){
    vector<string> ans;
    subsequence("abcdefgh","",ans,0);
    for(auto i : ans){
        cout<<i<<" ";
    }
    return 0;
}