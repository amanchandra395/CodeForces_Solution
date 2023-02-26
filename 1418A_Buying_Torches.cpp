#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t;
    long long x,y,k;
    cin>>t;
    while(t--){
        cin>>x>>y>>k;
        long double coal,sticks,div,need;
        long long ans = 0;
        coal = sticks = div = 0;
        coal = y * k;
        sticks = coal + (k-1);
        div = ceil(sticks/(x-1));
        ans = div + k;
        cout<<ans<<endl;
    }

    return 0;
}