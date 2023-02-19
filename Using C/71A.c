#include<stdio.h>
#include<string.h>
int main()
{
    int n,i,m;
    char arr[6000];
    scanf("%d",&n);

    for(i=1;i<=n;i++)
    {
        scanf("%s",&arr);
        int l=strlen(arr);

        if(l>10)
        {
            printf("%c%d%c\n",arr[0],l-2,arr[l-1]);
        }
        else 
            printf("%s\n",arr);
    }
    return 0;
}