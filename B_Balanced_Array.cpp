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
    vector<int>a;
    int sum1=0;
    int sum2=0;
    if((n/2)%2==1){
        cout<<"NO"<<endl;
        return 0;
    }
    for(int i=2;i<=n;i+=2){
        a.push_back(i);
        sum1+=i;
    }
    int i;
    for(i=1;i<n-1;i+=2){
        a.push_back(i);
        sum2+=i;
    }
    a.push_back(sum1-sum2);
    cout<<"YES"<<endl;
    for(int i=0;i<a.size();i++){
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