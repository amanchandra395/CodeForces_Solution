#include<iostream>
using namespace std;

int main(){
    
    int n;
    int m;
    cin>>n>>m;

    int arr[n];
    for(int i = 0; i<n; i++)
    {
        cin>>arr[i];
    }

    bool flag = false;
    for(int i = 0; i<n; i++)
    {
        flag = false;
        if(arr[i]==m)
        {
            arr[i] = 0;
            continue;
        }
        if((arr[i]%m) != 0)
        {
            flag = true;
        }
        arr[i] /= m;
        if(flag)
        {
            arr[i]++;
        }
    }
    int idx = 0;
    int ma = 0;

    for(int i = 0; i<n; i++)
    {
        if(arr[i] >= ma)
        {
            idx = i;
            ma = max(ma,arr[i]);
        }
    }
    cout<<idx+1<<endl;
    return 0;
}