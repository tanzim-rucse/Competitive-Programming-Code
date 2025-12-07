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
    int n, k;cin>>n>>k;
    int a;
    map<int,int>m;
    map<int,int>lastindex, prevmin;
    for(int i=0;i<n;i++){
        cin>>a;
        prevmin[a]=m[a];
        m[a]=max(m[a],i-lastindex[a]);
        lastindex[a]=i;        
    }
    for(auto i: m){
        prevmin[i.first]=m[i.first];
        m[i.first]=max(m[i.first],(n-1)-lastindex[i.first]);
    }

    // sort map by value
    vector<pair<int,int>> vec(m.begin(), m.end());
    sort(vec.begin(), vec.end(), [](auto &a, auto &b){
        return a.second < b.second;
    });

    // largest value
    auto mx_it = vec.rbegin();
    int mux = mx_it->second;

    // smallest value
    auto sm = vec.front();
    int mun = sm.second;
    if(mux/2>=mun)cout <<mun<<endl;
    else{
       int ans= min(mun,max(mux/2,prevmin[mx_it->first]));
        cout<<ans<<endl;
    }
    
    
    
    


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}