#include <iostream>
using namespace std;
int main()
{
    int n;
    long long int a;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> a;
        cout << (a-1)/2 << endl;
    }
    
    return 0;
}