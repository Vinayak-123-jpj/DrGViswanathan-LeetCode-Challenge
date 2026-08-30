#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    // Find tallest soldier (first occurrence)
    int tallest = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] > a[tallest]) {
            tallest = i;
        }
    }

    // Find shortest soldier (last occurrence)
    int shortest = 0;

    for (int i = 1; i < n; i++) {
        if (a[i] <= a[shortest]) {
            shortest = i;
        }
    }

    int ans = tallest + (n - 1 - shortest);

    if (tallest > shortest) {
        ans--;
    }

    cout << ans << endl;

    return 0;
}
