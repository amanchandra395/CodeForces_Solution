#include<bits/stdc++.h>
using namespace std;
int main()
{
    int a,b,c,n,sum = 0, ans = 0;
    cin>>a>>b>>c>>n;
    sum += a - c;
    sum += b - c;
    sum += c;
    ans = n - sum;
    if(ans <= 0 || (a<c) || (b < c)){
        cout<<-1<<endl;
    }
    else{
        cout<<ans<<endl;
    }

    return 0;
}