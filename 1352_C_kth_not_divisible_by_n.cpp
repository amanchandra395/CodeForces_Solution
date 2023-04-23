#include<bits/stdc++.h>
#include<stdio.h>

using namespace std;
#define ll                  long long
#define tcas(i,t)           for(ll i=1;i<=t;i++)


#define fast 	ios_base::sync_with_stdio(0);cin.tie(NULL);cout.tie(NULL)

int main()
{
    ll t;
    cin>>t;
    tcas(cs, t)
    {
        ll m,n,b,c,d,i,j,k,x,y,z,l,q,r;
        string s,s1, s2, s3, s4;

        ll cnt=0,cn=0,ans=0,sum=0 ;
        cin>>n>>k;


        //debug;
        ll tmp=k;
        l=1, r=2*k;

        while(l<r)
        {
            ll mid=(l+r)/2;
            if( (mid-(mid/n)) >=k )  r=mid;
            else  l=mid+1;
        }

        cout<<l<<endl;


    }

    return 0;
}