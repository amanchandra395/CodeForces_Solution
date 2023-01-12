#include<iostream>
using namespace std;

int main(){
    
    int n;
    cin>>n;
    bool flag = true;
    if(n%4 == 0 or n%7 == 0 or n%47 == 0)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        while(n>0)
        {
            int m = n%10;
            n /= 10;
            if(m == 4 or m == 7)
            {
                flag = true;
            }
            else
            {
                flag = false;
                break;
            }
        }
        if(flag)
        {
            cout<<"YES"<<endl;
        }
        else
        {
            cout<<"NO"<<endl;
        }
    }

    
    return 0;
}