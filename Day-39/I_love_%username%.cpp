#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    int x;
    cin >> x;

    int mn = x, mx = x;
    int ans = 0;

    for (int i = 1; i < n; i++) {
        cin >> x;

        if (x < mn) {
            ans++;
            mn = x;
        }

        if (x > mx) {
            ans++;
            mx = x;
        }
    }

    cout << ans << endl;

    return 0;
}
