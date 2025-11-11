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
    vector<ll>a;
    for(ll i=0;i<n;i++){
        int k;cin>>k;
        a.push_back(k);
    }
    int c=0;
    a.erase(unique(a.begin(),a.end()), a.end());
    for(ll i=0;i<a.size();i++){
        if(i==0 || i==a.size()-1|| (a[i]<a[i-1] && a[i]<a[i+1]) || (a[i]>a[i+1] && a[i]>a[i-1]))
        c++;
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