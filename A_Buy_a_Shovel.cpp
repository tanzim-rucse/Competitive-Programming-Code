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
    int k,r;cin>>k>>r;
    int i;int ans= k%10;
    for( i=1;i<10;i++){
        int m=(ans*i)%10;
        if(m==r || m==0){
            cout<<i<<endl;
            break;
        }


    }

    ;


return 0;
}



int main() {
    fast_io;
    solve();
    return 0;
}