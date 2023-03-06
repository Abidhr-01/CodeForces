#include <iostream>
using namespace std;
int main()
{
    int n,i, ans=0;
    string s;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> s;
        if (s == "Tetrahedron")
        {
            ans += 4;
        }
        else if (s == "Cube")
        {
            ans+=6;
        }
        else if (s == "Octahedron")
        {
            ans+=8;
        }
        else if (s == "Dodecahedron")
        {
            ans+=12;
        }
        else
        {
            ans+=20;
        }
    }
    cout << ans;
    return 0;
}