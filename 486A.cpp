#include <iostream>
#include <cmath>
using namespace std;
int main()
{
    long long n,a;
    cin >> n;
    if (n%2 == 0)
    {
        a = n/2;
    }
    else
    {
        a = (n+1)/(-2);
    }
    
    cout << a;
    return 0;
}