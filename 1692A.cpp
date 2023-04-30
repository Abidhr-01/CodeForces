#include <iostream>
using namespace std;
int main()
{
    long t; 
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        long a, b, c, d; 
        cin >> a >> b >> c >>d;
        cout << (b>a)+(c>a)+(d>a)<<endl;
    }
    return 0;
}