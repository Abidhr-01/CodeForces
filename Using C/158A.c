#include <stdio.h>
int main()
{
    int i,n, k, arr[100],b=0;

    scanf("%d %d",&n, &k);

    for (i = 0; i < n; i++)
    {
        scanf("%d ",&arr[i]);
    }

    for (i = 0; i < n; i++)
    {
        if (arr[i]>=arr[k-1] && arr[i]>0)
        {
            b++;
        }
        
    }
    printf("%d\n",b);
    
    return 0;
}