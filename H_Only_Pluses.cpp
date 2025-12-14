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
    vector<int>a(3);
    cin>>a[0]>>a[1]>>a[2];
    for(int i=0;i<5;i++){
        if(a[0]<=a[1] && a[0]<=a[2])a[0]++;
        else if(a[1]<=a[0] && a[1]<=a[2])a[1]++;
        else a[2]++;
    }
    ll result= a[0]*a[1]*a[2];
    cout<<result<<endl;
   
    


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}