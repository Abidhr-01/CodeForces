#include <iostream>
using namespace std;
int main()
{
    long long int n;
    cin >> n;
    int a = n/100;
    int b = n%100;

    a = a+(b/20);
    b = b%20;

    a = a+(b/10);
    b = b%10;

    a = a+(b/5);
    b = b%5;

    a = a+(b/1);

    cout << a;
    return 0;
}