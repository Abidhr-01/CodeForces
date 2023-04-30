#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t, r,ans;
    
    cin>>t;
    while (t--){
        int n;
        vector<int> v;
        cin >> n;
        if(n%10!=0){
            v.push_back(n%10);
        }
        r = n%10;
        n=n-r;
        if(n%100!=0){
            v.push_back(n%100);
        }
        r = n%100;
        n=n-r;
        if(n%1000!=0){
            v.push_back(n%1000);
        }
        r = n%1000;
        n=n-r;
        if(n%10000!=0){
            v.push_back(n%10000);
        }
        if (n%10000==0 && n>=10000)
        {
            v.push_back(n);
        }
        cout << v.size()<<endl;
        for (int i = 0; i < v.size(); i++)
        {
            cout << v[i]<<" ";
        }
        cout<<endl;
        
    }
    return 0;
}