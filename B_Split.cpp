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
    map<int,int>m;
    for(int i=0;i<2*n;i++){
        int a;cin>>a;
        m[a]++;
    }
    int c=0,k=0,sum=0;
    for(auto i: m){
        k++;
        sum+=i.second;
        if(i.second==2*n){
            if(n%2==1){
                cout<<2<<endl;
                return 0;
            }
            else {
                cout<<0<<endl;
                return 0;
            }
        }
         else if(k<3 && sum==2*n && n%2==1){
            cout<<2<<endl;
            return 0;
        }
        else if(i.second %2 ==1)c++;
        else if(i.second ==2)c+=2;
        else if(i.second%2==0)c+=2;
       
       
    }
    cout<<c<<endl;


return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}