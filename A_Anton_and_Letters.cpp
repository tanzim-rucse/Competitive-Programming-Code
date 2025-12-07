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
    
    string s;
    getline(cin,s);
    set<char>m;
    for(char c: s){
        if(c>='a' && c<='z'){
            m.insert(c);
        }
    }
    cout<<m.size()<<endl;

return 0;
}



int main() {
    fast_io;
    solve();
    return 0;
}