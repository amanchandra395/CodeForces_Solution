#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,x,y;
    cin>>t;
    while(t--){
        long long sum = 0, sub = 0,m = 10001;
        cin>>x>>y;
        if(x == y){
            cout<<x*2<<endl;
            continue;
        }
        m = min(x,y);
        sum = m * 2;
        sub = max(x,y) - m;
        sum++,sub--;
        sum += (sub * 2);
        cout<<sum<<endl;
    }

    return 0;
}