#include <iostream>
using namespace std;

int main() {

    int n, k;
    cin >> n >> k;

    int a[50];

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int kthScore = a[k - 1];

    int ans = 0;

    for (int i = 0; i < n; i++) {

        if (a[i] >= kthScore && a[i] > 0) {
            ans++;
        }

    }

    cout << ans;

    return 0;
}
