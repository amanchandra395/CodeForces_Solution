#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100001],b[100001];
    cin>>n;
    for(long long i=0; i<n; i++){
        cin>>a[i];
    }
    sort(a,a+n,greater<long long>());
    long long N = n;
    N /= 2;
    if(n & 1)N++;
    for(long long i=0; i<N; i++){
        b[i] = a[i];
    }
    sort(a,a+n);
    vector<long long>v;
    for(int i=0; i<N; i++){
        v.push_back(b[i]);
        if((n & 1) && (i+1 == N)){
            continue;
        }
        v.push_back(a[i]);
    }
    cout<<N-1<<endl;
    for(long long i=0; i<v.size(); i++){
        cout<<v[i]<<" ";
    }

    cout<<endl;


    return 0;
}