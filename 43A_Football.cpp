#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;

    unordered_map<string,int>m;
    while(n--)
    {
        string s;
        cin>>s;

        m[s]++;
    }
    int ans=0;
    string res;
    for(auto it:m){
        if(it.second>ans){
            res=it.first;
            ans=it.second;
        }
    }
    cout<<res<<endl;
    return 0;
}