#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,a;
    cin>>n;
    int one = 0,two = 0,three = 0;
    for(int i=0; i<n; i++){
        cin>>a;
        if(a == 1)one++;
        else if(a == 2)two++;
        else three++;
    }

    int m = 0, ans = 0;
    m = max(one,max(two,three));
    ans = (one + two + three);
    ans = abs(m - ans);
    cout<<ans<<endl;

    return 0;
}