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
    ll x,y,z;
    cin>>x>>y>>z;
    int a= x^y^z;
    if(a%2==1)cout<<"YES"<<endl;
    else cout<<"NO"<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}