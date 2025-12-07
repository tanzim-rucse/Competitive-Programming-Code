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
    vector<int>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    set<int>s;
    s.insert(a[0]);
    s.insert(a[1]);
    s.insert(a[2]);
    s.insert(a[3]);
    int c1=0;
    int c2=3;
    auto it = s.begin();
    int first=0,last=0;
    for(int i=4;i<n;i++){
        first = *it;
        last = *s.rbegin();
        if(a[c1]==first || a[c1]==last){
            c1++;
            advance(it, c1);
        }
        if(a[c2]!=first && a[c2]!=last && a[c1]!=first && a[c1]!=last){
            cout<<c1+1 <<" "<<c2+1<<endl;
            return 0;
        }
        if(i<n-1){
             c2++;
        s.insert(a[i]);
        }
       
    }
    cout<<-1<<endl;

return 0;
}



int main() {
    fast_io;
    int t;
    cin >> t;
    while(t--) solve();
    return 0;
}