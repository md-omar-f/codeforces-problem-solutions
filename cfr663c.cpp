#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define int long long int

//typedef long long int ll;


int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	int n,mod=1e9+7;
	cin>>n;
	int a=1,b=5e8+4;
	for(int i=1;i<=n;++i){
		a=a*i%mod;
		b=b*2%mod;
	}
	cout<<(a-b+mod)%mod;

	return 0;
}