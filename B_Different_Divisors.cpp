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
    int d;cin>>d;
    int start=d*4;
    int c=0;
    int ans=0;
        for(int i=start;;i++){
            int q=1,k=1;
            for(int j=1;j<=i;j++){
                if(i%j==0){
                    c++;
                    if(j-q>=d)
                    k++;
                    q=j;
                }
                
            }
            if(c==4 &&k==4){
                ans=i;   
                break;

            }
            else c=0;
        }
        cout<<ans<<endl;

return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}