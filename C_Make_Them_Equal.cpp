#include <bits/stdc++.h>
using namespace std;
#define pi (3.141592653589)
#define pb push_back
#define ff first
#define ss second
#define ll long long int
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"

int solve() {
    int n;
    char c;
    string s;
    cin >> n >> c >> s;

    // Case 1: Already all c
    bool allc = true;
    for (char ch : s) {
        if (ch != c) {
            allc = false;
            break;
        }
    }
    if (allc) {
        cout << 0 << endl;
        return 0;
    }

    // Case 2: Try to find one x (1 ≤ x ≤ n)
    int x_found = -1;
    for (int x = 1; x <= n; x++) {
        bool ok = true;
        for (int j = x; j <= n; j += x) {
            if (s[j - 1] != c) {
                ok = false;
                break;
            }
        }
        if (ok) {
            x_found = x;
            break;
        }
    }

    if (x_found != -1) {
        cout << 1 << endl;
        cout << x_found << endl;
    } else {
        cout << 2 << endl;
        cout << n << " " << n - 1 << endl;
    }
    return 0;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
