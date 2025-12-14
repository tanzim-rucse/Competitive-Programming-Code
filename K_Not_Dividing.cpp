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
int n;cin>>n;
vector<int>a(n);
for(int i=0;i<n;i++){
    cin>>a[i];
    if(a[i]==1)a[i]++;
}
for(int i=0;i<n-1;i++){
    if(a[i+1]%a[i]==0){
        a[i+1]++;
    }
}
for(int i=0;i<n;i++){
    cout<<a[i]<<" ";
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