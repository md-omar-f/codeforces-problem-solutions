#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;

void solve(){
	int n,k;
	cin>>n>>k;
	string s;
	cin>>s;
	sort(s.begin(),s.end());
	if(s[0]!=s[k-1]){
		cout<<s[k-1]<<endl;
		return;
	}
	cout<<s[0];
	if(s[k]!=s[n-1]){
		for(int i=k;i<n;++i){
			cout<<s[i];
		}
	}else{
		for(int i=0;i<(n-k+k-1)/k;++i){
			cout<<s[n-1];
		}
	}
	cout<<endl;
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int t;
	cin>>t;
	while(t--){
		solve();
	}

	return 0;
}