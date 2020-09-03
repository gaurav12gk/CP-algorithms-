#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool visited[10000];

void dfs(int source,int length,vector<pair<int,int>> &distance)
{
	visited[source]=1;
    distance.push_back(make_pair(source,length));
	for(int i=0;i<v[source].size();i++)
	{
		int child=v[source][i];
		if(visited[child]==0)
        dfs(child,length+1,distance);
	}
}
int main()
{
    #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
 vector<pair<int,int>> distance;
	int n;  
	cin>>n;
	int e;
	cin>>e;
	while(e--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);

	}
dfs(1,0,distance);
for(auto c:distance)
cout<<c.first<<" ->"<<c.second<<endl;
}