#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n;
    cin>>t;
    while(t--)
    {
        long long range = 0;
        cin>>n;
        range = 4 * n;
        range -= 2;
        while(n--)
        {
            cout<<range<<" ";
            range -= 2;
        }
        cout<<endl;
    }

    return 0;
}