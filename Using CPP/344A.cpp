#include <iostream>
using namespace std;
int main()
{
    int n,i,ar[100000],grp=0;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> ar[i];
    }
    for ( i = 0; i < n; i++)
    {
        if (ar[i] != ar[i+1])
        {
            grp++;
        }
        
    }
    cout << grp;
    return 0;
}