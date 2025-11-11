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
    string s;cin>>s;
    ll ans=0;
    for(ll i=1;i<=n;i++){
        for(ll j=i;j<=n;j=j+i){
            if(s[j-1]=='0'){
                s[j-1]='5';
                ans+=i;
            }
            else if(s[j-1]=='1'){
                break;
            }
        }
    }
    cout<<ans<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}