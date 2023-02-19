#include <stdio.h>
int main()
{
    int n,r=0;
    char ch[100];
    scanf("%d",&n);
    scanf("%s",ch);
    

    for ( int i = 0; i < n; i++)
    {
        if (ch[i]==ch[i+1])
        {
            r++;
        }
        
    }
    printf("%d",r);
    return 0;
}