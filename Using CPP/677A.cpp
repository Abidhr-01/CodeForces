#include <iostream>
using namespace std;
int main()
{
    int n,h,i,ar[1000],c=0;
    cin >> n >> h;
    for ( i = 0; i < n; i++)
        cin >> ar[i];
    
    for (i = 0; i < n; i++)
    {
        if (ar[i] <= h)
            c++; 
        else
            c+=2;
    }
    cout << c;
    return 0;
}