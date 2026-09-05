#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int l = 0, r = n - 1;
    int sereja = 0, dima = 0;
    bool turn = true; // true = Sereja, false = Dima

    while (l <= r) {
        int chosen;

        if (a[l] > a[r]) {
            chosen = a[l];
            l++;
        } else {
            chosen = a[r];
            r--;
        }

        if (turn)
            sereja += chosen;
        else
            dima += chosen;

        turn = !turn;
    }

    cout << sereja << " " << dima << endl;

    return 0;
}
