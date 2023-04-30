#include <iostream>
#include <vector>
using namespace std;

void solve() {
    int n;
    cin >> n;
    
    vector<int> steps;
    while (n > 1) {
        if (n % 2 == 0) {
            n /= 2;
            steps.push_back(1);
        } else if ((n - 1) % 4 == 0 && n != 3) {
            n -= 1;
            steps.push_back(2);
        } else {
            n += 1;
            steps.push_back(2);
        }
    }
    
    int m = steps.size();
    if (m > 40) {
        cout << -1 << endl;
        return;
    }
    
    cout << m << endl;
    for (int i = 0; i < m; i++) {
        cout << steps[m-i-1] << " ";
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;
    while (t--) {
        solve();
    }
    return 0;
}