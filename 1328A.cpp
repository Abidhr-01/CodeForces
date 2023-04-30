#include <iostream>
using namespace std;
int main()
{
    int n,i;
    long long int a,b;
    cin >> n;
    for (i = 0; i < n; i++)
    {
        cin >> a >> b;
        if (a%b==0)
        {
            cout << "0"<< endl;
        }
        else
        {
            cout << b-(a%b)<<endl;
        }
    }
    return 0;
}