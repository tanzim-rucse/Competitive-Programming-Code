#include <bits/stdc++.h>
using namespace std;

void solve() {
    int n;
    cin >> n;
    string s1, s2;
    cin >> s1 >> s2;

    vector<int> equalPrefix(n, 0);
    int one = 0, zero = 0;

    for (int i = 0; i < n; i++) {
        if (s1[i] == '1') one++;
        else zero++;
        if (one == zero) equalPrefix[i] = 1;
    }

    bool flipped = false;

    for (int i = n - 1; i >= 0; i--) {
        char a = s1[i];
        if (flipped) a = (a == '1' ? '0' : '1');

        if (a != s2[i]) {
            if (equalPrefix[i] == 0) {
                cout << "NO\n";
                return;
            }
            flipped = !flipped;
        }
    }

    cout << "YES"<<endl;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
