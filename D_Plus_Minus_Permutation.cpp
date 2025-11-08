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
    ll n,x,y;
    cin>>n>>x>>y;
    ll g=__gcd(x,y);
    ll lc=(x*y)/g;
    ll num_of_common=n/lc;
    ll plus=0,minus=0;
    ll sum=n/2;
    for(int i=0;i<num_of_common;i++){
        plus+=sum;
        minus+=sum;
        sum++;
    }
    ll k=(n/x)-num_of_common;
    sum=n*(n+1)/2;
    sum-=(n-k)*(n-k+1)/2;
    plus+=sum;
    ll mi=(n/y)-num_of_common;
    minus+=(mi*(mi+1))/2;
    cout<<plus-minus<<endl;




return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}
