#include<iostream>
using namespace std;

int main()
{
    int a,b,c;
    cin>>a>>b>>c;

    int ans = min(a-b,c+1);
    cout<<ans<<endl;
    return 0;
}