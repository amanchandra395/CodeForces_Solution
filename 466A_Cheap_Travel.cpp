#include<iostream>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void question_banale_aman()
{
    int n,m,a,b;
    cin>>n>>m>>a>>b;
    
    if(n<m)
    {
        int r = min(b,a*n);
        cout<<r<<endl;
        return;
    }
    if(b/m >= a)
    {
        cout<<a*n<<endl;
        return;
    }
    else if(a >= b*m)
    {
        int r = (n/m)*b;
        if(n%m > 0)
        {
            r += b;
        }
        cout<<r<<endl;
        return;
    }
    else if(a>b)
    {
        int r = (n/m)*b;
        if(n%m > 0)
        {
            r += b;
        }
        cout<<r<<endl;
        return;
    }

    int ans = (n/m)*b + (n%m)*a;
    cout<<ans<<endl;
    return;

}
void chal_bhai_code_karte_hai()
{
    int jab_tak_chalega = 1;
    //cin>>jab_tak_chalega;
    while(jab_tak_chalega--)
    {
        question_banale_aman();
    }
}
signed main()
{
    fastread();
    chal_bhai_code_karte_hai();
    return 0;
}