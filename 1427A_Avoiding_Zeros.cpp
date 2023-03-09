#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long t,n,a[100];
    cin>>t;
    while(t--){
        cin>>n;

        int sum = 0,neg = 0,pos = 0;
        for(int i=0; i<n; i++){
            cin>>a[i];
            if(a[i] >= 0){
                pos += a[i];
            }
            else{
                neg += (a[i] * -1);
            }
            sum += a[i];
        }
        sort(a,a+n);
        if(sum == 0){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            if(pos > neg){
                for(int i=n-1; i>=0; i--){
                    cout<<a[i]<<" ";
                }
            }
            else{
                for(int i=0; i<n; i++){
                    cout<<a[i]<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}