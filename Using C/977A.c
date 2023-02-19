#include <stdio.h>
int main()
{
    int n=0,k=0;
    scanf("%d %d",&n,&k);
    for (int i = 1; i <= k; i++)
    {
        int s = n%10;
        if (s==0)
        {
            n/=10;
        }
        else
        {
            n-=1;
        }
        
    }
    printf("%d",n);
    
    return 0;
}