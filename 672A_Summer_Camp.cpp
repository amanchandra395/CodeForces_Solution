#include<bits/stdc++.h>
using namespace std;
int main()
{
    long long n;
    cin>>n;

    vector<int>v;
    stack<int>st;

    for(int i=1; i<=1000; i++)
    {
        if(i < 10)
        {
            v.push_back(i);
        }
        else
        {
            int a = i,d;
            while(a >= 10)
            {
                d = a % 10;
                a = a / 10;
                st.push(d);
            }
            st.push(a);
            while(!st.empty())
            {
                d = st.top();
                st.pop();
                v.push_back(d);
            }
        }
    }
    cout<<v[n-1]<<endl;
    return 0;
}