#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t,ans=0;
    cin>>t;
    while(t--){
       int a,b;
       cin >>a>>b;
       
       while (a!=0)
       {
            if (a%b!=0)
            {
                b=b+1;
                ans++;
            }
       }
       cout <<ans<<endl;
       
        
    }
    return 0;
}