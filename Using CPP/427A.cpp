#include <iostream>
using namespace std;
int main()
{
    int n, a, free_police=0, crime=0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        if (a<0 && free_police == 0)
        {
            crime++;
        }
        else 
            free_police+=a;
    }
    cout << crime;
    
    return 0;
}