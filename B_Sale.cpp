#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    int n,m,p;cin>>n>>m;
    vector<int>v(n);
    while(cin>>p)p<0?v.push_back(p):(void)0;
    sort(v.begin(),v.end());
    cout<<abs(accumulate(v.begin(),v.begin()+m,0));
}

int32_t main(){
    IOS;
    /*#ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif*/
    
    
    // int t;cin>>t;
    // while(t--){
         solve();
    // }
    
    return 0;
}