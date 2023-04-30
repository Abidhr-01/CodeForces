#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long int t,a,b;
    double ans;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if(a==b){
            cout<<0<<"\n";
        }else{
            if(abs(a-b)%10==0){
                cout<<abs(a-b)/10<<"\n";
            }else{
                cout<<(abs(a-b)/10)+1<<"\n";
            }
        }
    }
    return 0;
}