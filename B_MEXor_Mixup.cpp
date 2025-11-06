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
    int a ,b;cin>>a>>b;
    int ans=0,k=a-1;;
    if(k%4==0)ans=k;
    else if(k%4==1)ans=1;
    else if(k%4==2)ans=k+1;
    else if(k%4==3)ans=0;
   
    if(ans==b)cout<<a<<endl;
    else if((ans^b)!=a)cout<<a+1<<endl;
    else cout<<a+2<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}