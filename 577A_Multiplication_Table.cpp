#include<iostream>
using namespace std;

int main()
{
    long long int n,x;
    cin>>n>>x;
    long long int ans = 0;
    for(long long int i = 1; i<=n; i++)
    {
        if(x%i == 0 and x/i <= n)
        {
            ans++;
        }
    }
    cout<<ans<<endl;
    

    return 0;
}