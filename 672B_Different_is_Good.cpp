#include<bits/stdc++.h>
#define ll              long long
using namespace std;
int main()
{
    ll n,c;
    string s;
    set<char>SET;

    cin>>n>>s;

    for(ll i=0; i<n; i++){
        SET.insert(s[i]);
    }
    c = SET.size();

    if(n > 26){
        cout<<-1<<endl;
    }
    else{
        cout<<abs(n - c)<<endl;
    }

    return 0;
}