#include <stdio.h>
#include <math.h>
int main()
{
    int m, n;
    float rem;
    scanf("%d %d",&m,&n);
    rem = m*n % 2;

    printf("%d",(m*n)/2);
    
     
    return 0;
}