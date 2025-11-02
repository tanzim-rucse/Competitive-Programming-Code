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
    int n;cin>>n;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    for (int i = 0; i < n; i++) {
    ll k = a[i];
    ll low = 1, high = 1e10;
    ll ans = 0;  
    while (low <= high) {
        ll mid = (low + high) / 2;
        ll t=(mid * (mid + 1) / 2LL);
        if ( t== k) {
            ans = mid;
            break;
        } else if(t<k){
            low=mid+1;
            ans=mid;
        }
        else high=mid-1;
    }
    cout << ans << endl;

    }


return 0;
}



int main() {
    fast_io;
    solve();
    return 0;
}