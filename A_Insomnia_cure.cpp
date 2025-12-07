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
    int k,l,m,n,d;
    cin>>k>>l>>m>>n>>d;
    int c=0;
    for(int i=1;i<=d;i++){
        if(i%k==0 || i%l==0 || i%m==0 || i%n==0){
            c++;
        }
    }

    cout<<c<<endl;

return 0;
}



int main() {
    fast_io;
    solve();
    return 0;
}