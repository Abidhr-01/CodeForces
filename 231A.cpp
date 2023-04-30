#include<bits/stdc++.h>

int main()
{
    int n,i,a[5],sum=0,count=0;
    cin >> n;

    while(n--)
    {
        for(i=0;i<3;i++)
            cin>>a[i];
    
        sum=0;
        
        for(i=0;i<3;i++)
            if(a[i]==1) sum++;
        
        if(sum>=2) 
            count++;
    }
    cout<<count;
    return 0;

}