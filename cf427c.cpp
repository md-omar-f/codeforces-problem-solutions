#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"
#define forn(i,n) for(int i=0;i<int(n);++i)
#define vet(a) for(auto&i:a)cout<<i<<" "
#define out(a) cout<<a<<endl
#define ll long long int

const int MOD=1e9+7;

int n,m,c[100000];
ll minCost=0,cont=1;
bool vis[100000]={};
vector<int>adj[100000],adjr[100000],order,comp;

void dfs1(int u){
	vis[u]=1;
	for(int v:adj[u]){
		if(!vis[v]){
			dfs1(v);
		}
	}
	order.push_back(u);
}

void dfs2(int u){
	vis[u]=1;
	comp.push_back(u);
	for(int v:adjr[u]){
		if(!vis[v]){
			dfs2(v);
		}
	}
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	cin>>n;
	for(int i=0;i<n;++i){
		cin>>c[i];
	}
	cin>>m;
	for(int i=0,u,v;i<m;++i){
		cin>>u>>v,--u,--v;
		adj[u].push_back(v);
		adjr[v].push_back(u);
	}
	for(int i=0;i<n;++i){
		if(!vis[i]){
			dfs1(i);
		}
	}
	memset(vis,0,sizeof(vis));
	for(int i=n-1;i>=0;--i){
		if(!vis[order[i]]){
			dfs2(order[i]);
			pair<int,int>x={2e9,0};
			for(int u:comp){
				if(c[u]<x.first){
					x={c[u],1};
				}else if(c[u]==x.first){
					++x.second;
				}
			}
			minCost+=x.first;
			cont=cont*x.second%MOD;
			comp.clear();
		}
	}
	cout<<minCost<<" "<<cont;

	return 0;
}