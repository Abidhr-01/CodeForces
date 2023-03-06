#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
    int n,p[100];
    double ans=0.0,sum=0.0;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> p[i];
    }
    for (int i = 0; i < n; i++)
    {
        sum += p[i];
    }
    ans = sum/n;
    std::cout << std::fixed;
    std::cout << std::setprecision(12);
    cout << ans;
    return 0;
}