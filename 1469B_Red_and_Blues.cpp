#include<bits/stdc++.h>
#define ll long long
using namespace std;
int main()
{
     ll t;
     cin>>t;
     while(t--)
     {
          ll n; cin>>n;
          vector<ll>a(n);
          for(ll i=0;i<n;i++) cin>>a[i];
          ll m;
          cin>>m;
          vector<ll>b(m);
          for(ll i=0;i<m;i++) cin>>b[i];
          partial_sum(a.begin(),a.end(),a.begin());
          partial_sum(b.begin(),b.end(),b.begin());
          cout<<max((ll)0,*max_element(a.begin(),a.end()))+max((ll)0,*max_element(b.begin(),b.end()));
          cout<<endl;
          
     }
}