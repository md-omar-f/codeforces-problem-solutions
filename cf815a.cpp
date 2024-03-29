#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int
#define REP(i,n) for(int i=0;i<n;++i)

const int N=555;
int g[110][110],n,m;

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n>>m;
	vector<int>A,B;
	REP(i,n)REP(j,m)cin>>g[i][j];
	int best=-1;
	REP(x,N){
		vector<int>a(n),b(m);
		a[0]=x;
		REP(j,m)b[j]=g[0][j]-x;
		REP(i,n)a[i]=g[i][0]-b[0];
		bool ok=true;
		REP(i,n)ok=ok and (a[i]>=0);
		REP(j,m)ok=ok and (b[j]>=0);
		REP(i,n)REP(j,m)ok=ok and (a[i]+b[j]==g[i][j]);
		if(ok){
			int total=accumulate(a.begin(),a.end(),0)+accumulate(b.begin(),b.end(),0);
			if(best==-1||total<best){
				best=total;
				A=a,B=b;
			}
		}
	}
	cout<<best<<endl;
	if(best!=-1){
		REP(i,n)REP(j,A[i])cout<<"row "<<i+1<<endl;
		REP(j,m)REP(i,B[j])cout<<"col "<<j+1<<endl;
	}
	
	return 0;
}