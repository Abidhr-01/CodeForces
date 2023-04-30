#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int n,m;
    int a=0;
    char c;
    cin>>n>>m;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin>>c;
            if(c=='C' || c=='M' || c=='Y') a++;
        }
        
            
    }
    if(a>0) cout<<"#Color";
    else cout<<"#Black&White";
             
    return 0;
}