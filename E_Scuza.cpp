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
    ll n,q;cin>>n>>q;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    vector<pair<ll,ll>>k(q);
    for(int i=0;i<q;i++){
        ll l;cin>>l;
        k[i].first=l;
        k[i].second=i;
    }
    sort(k.begin(),k.end());
    ll m=-1,sum=0;
    vector<ll>ans(q);
    for(int i=0;i<q;i++){
        while(m<n-1 && (k[i].first>=a[m+1])){
                m++;
                sum+=a[m]; 
        }
         ans[k[i].second]=sum;
    }
    
    for(int i=0;i<q;i++){
        cout<<ans[i]<<" ";
    }
    cout<<endl;

return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}