#include<iostream>
using namespace std;

int main()
{
    int n;
    cin>>n;
    while(n--)
    {
        int a,b,c;
        cin>>a>>b>>c;

        long long ans;
        ans = max(a-b,a-c);
        cout<<ans+1<<endl;

    }
    return 0;
}