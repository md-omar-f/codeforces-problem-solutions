#include <bits/stdc++.h>

using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define lli long long int

void solve(){
    lli n;cin>>n;
    vector<lli>v(n);
    for(auto &i:v)cin>>i;
    lli sum1=0,sum3=0,mx=0;
    lli i=0,j=n-1;
    while(i<=j){
        if(sum1>sum3){
            sum3+=v[j--];
        }else{
            sum1+=v[i++];
        }
        if(sum1==sum3)mx=sum1;
    }
    cout<<mx;
}

int32_t main(){
    IOS;
    
    /*
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    #endif
    */
    
    
    int t=1;
    //cin>>t;
    while(t--){
        solve();
    }
    
    return 0;
}