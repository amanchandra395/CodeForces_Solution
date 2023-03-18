#include <bits/stdc++.h>
using namespace std;

int main()
{

    int t;
    cin >> t;
    while (t--)
    {
        int N;
        cin >> N;
        string s;
        cin >> s;
        int ans = 0;
        int cnt = 0;
        for (int i = N-1; i >= 0; i--)
        {
            if (s[i] == 'P')
                cnt++;
            else
            {
                ans = max(ans, cnt);
                cnt = 0;
            }
        }
        cout << ans << endl;
    }
    return 0;
}