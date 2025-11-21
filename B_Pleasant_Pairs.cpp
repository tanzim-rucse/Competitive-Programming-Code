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
    vector<pair<ll,ll>>p(n);
    for(ll i=0;i<n;i++){
        cin>>p[i].first;
        p[i].second=i+1;
    }
    ll c=0;
    sort(p.begin(),p.end());
    for(ll i=0;i<n-1;i++){
        for(ll j=i+1;j<n;j++){
            if((p[i].first* p[j].first)==(p[i].second+p[j].second)){
                c++;
            }
            else if(p[i].first*p[j].first>2*n){
                break;
            }
        }
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