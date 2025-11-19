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
    ll n,m;cin>>n>>m;
    vector<ll>a(m);
    for(ll i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    vector<ll>diff;
    for(ll i=0;i<m-1;i++){
        diff.push_back(a[i+1]-a[i]-1);
    }
    diff.push_back(n-a[m-1]+a[0]-1);
    sort(diff.begin(),diff.end(),greater<int>());
    ll safe=0,cur=0,c=0;
    for(ll i=0;i<diff.size();i++){
        cur=diff[i];
        cur-=(c*2);
        if(cur<=0)break;
        safe+=cur-1;
        if(cur==1)safe++;
        c+=2;
    }
    cout<<n-safe<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}