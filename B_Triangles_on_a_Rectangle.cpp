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
    ll w,h,k;
    ll a2=INT_MAX,b2=INT_MAX,c2=INT_MAX,d2=INT_MAX;
    ll a1=INT_MIN,b1=INT_MIN,c1=INT_MIN,d1=INT_MIN;
    
    cin>>w>>h;
    cin>>k;
    for(ll i=0;i<k;i++){
        ll a;cin>>a;
        a1=max(a1,a);
        a2=min(a2,a);
    }
    cin>>k;
    for(ll i=0;i<k;i++){
        ll a;cin>>a;
        b1=max(b1,a);
        b2=min(b2,a);
    }
    cin>>k;
    for(ll i=0;i<k;i++){
        ll a;cin>>a;
        c1=max(c1,a);
        c2=min(c2,a);
    }
    cin>>k;
    for(ll i=0;i<k;i++){
        ll a;cin>>a;
        d1=max(d1,a);
        d2=min(d2,a);
    }

    ll dif1=a1-a2;
    ll dif2=b1-b2;
    ll dif3=c1-c2;
    ll dif4=d1-d2;
    ll ans=0;
    ans=max(ans,dif1*h);
    ans=max(ans,dif2*h);
    ans=max(ans,dif3*w);
    ans=max(ans,dif4*w);
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