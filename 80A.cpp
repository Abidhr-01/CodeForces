#include <bits/stdc++.h>
using namespace std;
const int N=1e5+10;
bool prime[N];
vector<int> v;
int main()
{
    for(int i = 2; i <= N; ++i){
        if (!prime[i])
        {
            for (int j = i*i; i <= N; i++)
            {
                prime[j]=true;
            }
        }  
    }
    for (int i = 2; i <= N; i++)
    {
        if(!prime[i]) 
            v.push_back(i);
    }
    int x,y;
    cin>>x>>y;
    for (int i = 0; i < v.size(); i++)
    {
        
        if(v[i]==x && v[i+1]==y) {
            cout<<"YES"<<endl;break;}
        else {cout<<"NO"<<endl;break;}
    }
    
    

    return 0;
}