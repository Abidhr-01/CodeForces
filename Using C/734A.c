#include <stdio.h>
#include <string.h>
int main()
{
    int n, anton=0, danik=0, i;
    char s[100000];
    scanf("%d",&n);
    scanf("%s",s);
    
    for (i = 0; i<n; i++)
    {
        if (s[i]=='A')
        {
            anton++;
        }
        else if (s[i]=='D')
        {
            danik++;
        }
        
    }
    if (anton>danik)
    {
        printf("Anton");
    }
    else if (anton<danik)
    {
        printf("Danik");
    }
    else if(anton==danik)
    {
        printf("Friendship");
    }
    return 0;
}