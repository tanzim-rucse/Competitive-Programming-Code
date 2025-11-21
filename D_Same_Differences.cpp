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
    ll n;cin>>n;
    ll a;
    map<ll,ll>m;
    for(ll i=0;i<n;i++)
    {
        ll k;cin>>k;
        a=k-(i+1);
        m[a]++;
    }
    ll c=0;
    for(auto i: m){
        c+=(i.second*(i.second-1)/2);
    }
    cout<<c<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}