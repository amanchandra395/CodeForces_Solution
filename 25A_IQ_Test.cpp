#include<iostream>
#define ll              long long
#define ull             unsigned long long
#define pb              push_back
#define fastread()      (ios_base:: sync_with_stdio(false),cin.tie(NULL));
using namespace std;

void question_banale_aman()
{
    int n;
    cin>>n;
    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }
    int even = 0;
    int odd = 0;
    int ce = 0;
    int co = 0;
    for(int i = 0; i<n; i++)
    {
        if(arr[i]%2 == 0)
        {
            even++;
            ce = i;
        }
        else{
            odd++;
            co = i;
        }
    }
    if(even == 1)
    {
        cout<<ce+1<<endl;
    }
    else
    {
        cout<<co+1<<endl;
    }

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