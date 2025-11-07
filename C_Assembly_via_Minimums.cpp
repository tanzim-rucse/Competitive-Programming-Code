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
    int k= (n*(n-1))/2;
    vector<int>a(k);
    for(int i=0;i<k;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    int x=n-1;
    int i=0;
    while(x>0){
        cout<<a[i]<<" ";
        i+=x;
        x--;
    }
    cout<<1000000000;
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