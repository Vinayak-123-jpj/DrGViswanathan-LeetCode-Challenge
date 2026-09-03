#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cin >> s;

    bool change = true;

    // Check if all characters are uppercase
    for (char c : s) {
        if (islower(c)) {
            change = false;
            break;
        }
    }

    // Check if all characters except the first are uppercase
    if (!change) {
        change = true;
        for (int i = 1; i < s.size(); i++) {
            if (islower(s[i])) {
                change = false;
                break;
            }
        }
    }

    if (change) {
        for (char &c : s) {
            if (islower(c))
                c = toupper(c);
            else
                c = tolower(c);
        }
    }

    cout << s << endl;

    return 0;
}
