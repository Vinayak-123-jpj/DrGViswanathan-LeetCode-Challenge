#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, m;
    cin >> n >> m;

    long long ans = 0;
    int current = 1;

    for (int i = 0; i < m; i++) {
        int x;
        cin >> x;

        if (x >= current) {
            ans += x - current;
        } else {
            ans += n - current + x;
        }

        current = x;
    }

    cout << ans << endl;

    return 0;
}
