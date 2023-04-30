#include <iostream>
#include <algorithm>

using namespace std;

const int MAXN = 100005;

int main() {
    int n;
    int a[MAXN], b[MAXN];

    ci    n >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }

    for (int i = 1; i <= n; i++) {
        b[a[i]] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << b[i] << " ";
    }
    cout << endl;

    return 0;
}