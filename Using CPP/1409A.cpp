#include <iostream>
using namespace std;
int main()
{
    long long int t,a,b;
    int ans,r,a[100]={10,9,8,7,6,5,4,3,2,1};
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        cin >> a >> b;
        if (a>b)
        {
            ans = a-b;
            for (i = 0; i < 10; i++)
            {
                if (ans>b)
                {
                    r = ans/a[i];
                }
                
                
            }
            
        }
        else{
            
        }
    }
    
    return 0;
}