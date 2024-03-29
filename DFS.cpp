#include<bits/stdc++.h>
using namespace std;

#define IOS ios::sync_with_stdio(0); cin.tie(0); cout.tie(0);
#define endl "\n"

class Graph{
	int V;
	list<int>*adj;
	void DFSUtil(int v,bool visited[]);
public:
	Graph(int V);
	void addEdge(int v,int w);
	void DFS(int v);
};

Graph::Graph(int V){
	this->V=V;
	adj=new list<int>[V];
}

void Graph::addEdge(int v,int w){
	adj[v].push_back(w);
}

void Graph::DFSUtil(int v,bool visited[]){
	if(!visited[v]){
		visited[v]=true;
	}
	cout<<v<<" ";
	list<int>::iterator i;
	for(i=adj[v].begin();i!=adj[v].end();++i){
		if(!visited[*i]){
			DFSUtil(*i,visited);
		}
	}
}

void Graph::DFS(int v){
	bool *visited=new bool[V];
	for(int i=0;i<V;++i){
		visited[i]=false;
	}
	DFSUtil(v,visited);
}

int32_t main()
{
	IOS;
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	#endif

	Graph g(4);

    g.addEdge(0, 1); 
    g.addEdge(0, 2); 
    g.addEdge(1, 2); 
    g.addEdge(2, 0); 
    g.addEdge(2, 3); 
    g.addEdge(3, 3); 

	cout<<"DFS traversal from node 2"<<endl;
	g.DFS(2);

	
	return 0;
}