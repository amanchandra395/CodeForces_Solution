#include<bits/stdc++.h>
using namespace std;

int check(int n){
    int min1=INT_MAX;
    int max1=INT_MIN;
    while(n>0){
        max1=max(max1,n%10);
        min1=min(min1,n%10);
        n/=10;
    }
    return max1-min1;

}


int main(){
    int t;
    cin>>t;
    while(t--){
        int l,r;
        cin>>l>>r;
        int max1=INT_MIN,res=0;
        if(r-l<100){
            for(int i=l;i<=r;i++){
                int x=check(i);
                if(x>max1){res=i;max1=x;}

                }
            cout<<res<<endl;
        }

        else{
            for(int i=l;i<l+100;i++){
                
                int x=check(i);
                if(x>max1){
                    res=i;
                    max1=x;}

                
            }
            cout<<res<<endl;
            
        }

    }
}