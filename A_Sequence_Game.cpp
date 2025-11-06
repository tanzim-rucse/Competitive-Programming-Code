#include <bits/stdc++.h>
using namespace std;
#define ll long long int
#define fast_io ios_base::sync_with_stdio(false); cin.tie(0); cout.tie(0)
#define endl "\n"

int solve() {
    ll n; cin >> n;
    vector<ll> a(n);
    for (ll i = 0; i < n; i++) cin >> a[i];
    ll y; cin >> y;

    ll minimum = *min_element(a.begin(), a.end());
    ll maximum = *max_element(a.begin(), a.end());

    if (y >= minimum && y <= maximum)
        cout << "YES" << endl;
    else
        cout << "NO" << endl;

    return 0;
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
