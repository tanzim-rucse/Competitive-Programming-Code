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
    string s;cin>>s;
    int l=s.size();
    int c=0;
    for(int i=0;i<l;i++){
        if(s[i]=='A'){
            for(int j=i+1;j<l;j++){
                if(s[j]=='B'){
                    int k=j-i;
                    if(s[k+j]=='C')c++;
                }
            }
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