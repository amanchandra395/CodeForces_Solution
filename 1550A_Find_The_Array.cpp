#include<bits/stdc++.h>
using namespace std;
int main()
{
        int tt;
        cin >> tt;
        while(tt --)
        {
                int n;
                cin >> n;
                int x;
                for(x = 1; x * x < n ; x ++) ;
                cout << x << '\n';
        }
        return 0;
}
