#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);
    for(int &x : a) cin >> x;

    int mx = max_element(a.begin(), a.end()) - a.begin();
    int mn = find(a.rbegin(), a.rend(), *min_element(a.begin(), a.end())) - a.rbegin();
    mn = n - 1 - mn;

    int ans = mx + (n - 1 - mn);

    if(mx > mn) ans--;

    cout << ans;
}
