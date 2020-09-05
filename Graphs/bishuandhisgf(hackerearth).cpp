#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool visited[10000];

void dfs(int source,int length,int distance[])
{
	visited[source]=1;
   distance[source]=length;
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
int distance[2000];
	int n;  
	cin>>n;
	int e=n-1;
	
	while(e--)
	{
		int a,b;
		cin>>a>>b;
		v[a].push_back(b);
		v[b].push_back(a);

	}
    int ans=100000;
dfs(1,0,distance);
int q;
int value=10000;
cin>>q;
while(q--)
{
int a;
cin>>a;
if(value>distance[a])
{
    ans=a;
    value=distance[a];
}
else if(value==distance[a])
{
    ans=min(ans,a);
    
}
}cout<<ans;
}