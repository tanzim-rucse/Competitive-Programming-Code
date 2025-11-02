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
    int  n ;cin>>n;
    int total=0;
    for(int i=0;i<n;i++){
        int a;cin>>a;
        total=total^a;
    }
    if(n%2==0 && total!=0){
        cout<<-1<<endl;
    }
    else cout<<total<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}