#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n,rest = 0,ans = 0;
    cin>>n;
    vector<long long>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    for(int i=0; i<2*n; i++){
        if(a[i%n] == 1){
            rest++;
            ans = max(ans,rest);
        }
        else{
            rest = 0;
        }
    }
    cout<<ans<<endl;
    return 0;
}