#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {

    string s;
    cin >> s;

    vector<char> v;

    // Store only numbers
    for (char ch : s) {
        if (ch != '+')
            v.push_back(ch);
    }

    // Sort numbers
    sort(v.begin(), v.end());

    // Print answer
    for (int i = 0; i < v.size(); i++) {
        cout << v[i];
        if (i != v.size() - 1)
            cout << "+";
    }

    return 0;
}
