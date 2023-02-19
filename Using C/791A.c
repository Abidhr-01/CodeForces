#include <stdio.h>
int main()
{
    int a,b,n;
    scanf("%d %d",&a,&b);
    for (n=1; ; n++)
    {
        a*=3;
        b*=2;
        if (a>b)
        {
            break;
        }
        
    }
    printf("%d",n);
    return 0;
}