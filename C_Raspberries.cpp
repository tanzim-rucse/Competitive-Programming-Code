#include <bits/stdc++.h>
using namespace std;
#define ll long long
#define fast_io ios::sync_with_stdio(false); cin.tie(0); cout.tie(0)

void solve() {
    ll n, k;
    cin >> n >> k;
    vector<ll> a(n);
    ll ans = LLONG_MAX, even_count = 0;

    for (ll i = 0; i < n; i++) {
        cin >> a[i];
        if (a[i] % 2 == 0) even_count++;
        if (a[i] % k == 0) ans = 0;
        ans = min(ans, (k - a[i] % k) % k);
    }

    if (k == 4 && ans != 0) {
        if (even_count >= 2) ans = min(ans, 0LL);
        else if (even_count == 1) ans = min(ans, 1LL);
        else ans = min(ans, 2LL);
    }

    cout << ans << "\n";
}

int main() {
    fast_io;
    int t;
    cin >> t;
    while (t--) solve();
    return 0;
}
