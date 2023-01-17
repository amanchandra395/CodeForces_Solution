#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main(){
    
    int n;
    cin>>n;

    vector<string>s;
    string temp;

    for(int i = 0; i<n; i++)
    {
        cin>>temp;
        s.push_back(temp);
    }

    int ans = 0;
    for(int i = 0; i<n; i++)
    {
        if(s[i] == "Tetrahedron")
        {
            ans += 4;
        }
        else if(s[i] == "Cube")
        {
            ans += 6;
        }
        else if(s[i] == "Octahedron")
        {
            ans += 8;
        }
        else if(s[i] == "Dodecahedron")
        {
            ans += 12;
        }
        else if(s[i] == "Icosahedron")
        {
            ans += 20;
        }
    }

    cout<<ans<<endl;
    return 0;
}