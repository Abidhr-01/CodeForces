#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--){
        int n,ct=0;
        cin>>n;
        if(n%10!=0) 
        {
            cout<<n%10<<" "; 
            ct++;
        }
        int ans=n%10;
        n=n-ans;
        if(n%100!=0)
        {
            cout<<n%100<<" "; 
            ct++;
        }
        ans=n%100;
        n=n-ans;
        if(n%1000!=0)
        {
            cout<<n%1000<< " "; 
            ct++;
        }
        ans=n%1000;
        n=n-ans;
        cout<<ct;
    }
    return 0;
}