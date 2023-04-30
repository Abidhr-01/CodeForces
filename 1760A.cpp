#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n;
    int a,b,c;
    cin >>n;
    for (int i = 0; i < n; i++)
    {
        cin >>a>>b>>c;
        if (a>b &&b<c){
            if (a<c) cout<< a<<endl;
            else cout<< c<<endl;
        }
        else if (a<b && b>c){
            if (a>c) cout<< a<<endl;
            else cout<< c<<endl;
        }
        else cout<< b<<endl;
    }
    return 0;
}