#include <iostream>
using namespace std;
int main(){
    int m,c,x=0,y=0,d=0;
    long long n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> m >> c;
        if (m>c) x++;
        else if (m<c) y++;
        else d++;
        
    }
    if (x==y || d==n)
        cout << "Friendship is magic!^^";
    else if (x<y)
        cout << "Chris";
    else cout << "Mishka";
}