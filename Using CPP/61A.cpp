#include <iostream>
#include <string>
using namespace std;
int main()
{
    string a,b;
    int i;
    cin >> a >> b;

    for (i = 0; i < a.length(); i++)
    {
        if (a[i] != b[i])
        {
            cout << 1;
        }
        else
            cout << 0;
    }
    
    return 0;
}