#include<bits/stdc++.h>
using namespace std;

bool a[50][50];

int main()
{
	// #ifndef ONLINE_JUDGE
	// freopen("input.txt","r",stdin);
	// freopen("output.txt","w",stdout);
	// #endif

	int t;
	cin>>t;
	while(t--){
		int n;
		cin>>n;
		for (int i = 0; i < n; ++i)
		{
			for (int j = 0; j < n; ++j)
			{
				char c;
				cin>>c;
				a[i][j]=c-'0';
			}
		}
		bool ans=true;
		for (int i = n-2; i >= 0; --i)
		{
			for (int j = n-2; j >= 0; --j)
			{
				if (a[i][j]&&!a[i][j+1]&&!a[i+1][j])
				{
					ans=false;
				}
			}
		}
		cout<<(ans?"YES":"NO")<<endl;
	}
	return 0;
}