#include <bits/stdc++.h>
using namespace std;

int main() {
    int n, k, l, c, d, p, nl, np;
    cin >> n >> k >> l >> c >> d >> p >> nl >> np;

    int drink = (k * l) / (n * nl);
    int lime = (c * d) / n;
    int salt = p / (n * np);

    cout << min({drink, lime, salt});

    return 0;
}
