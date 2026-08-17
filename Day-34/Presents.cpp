#include <iostream>
using namespace std;

int main() {
    int n;
    cin >> n;

    int p[101];

    for (int i = 1; i <= n; i++) {
        int x;
        cin >> x;

        p[x] = i;
    }

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }

    return 0;
}
