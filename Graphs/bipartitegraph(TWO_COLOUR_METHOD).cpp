#include<bits/stdc++.h>
using namespace std;
vector<int> v[1000];
bool visited[10000];
int colour[1000];
bool dfs(int source,int color)
{
visited[source]=1;
colour[source]=color;
for(int child:v[source])
{
	if(!visited[child])
	{
		if(dfs(child,color^1)==false)
		return false;
	}
	else if(colour[source]==colour[child])
	return false;
}
return true;
}
int main()
{
    #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
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
  for(int i=0;i<7;i++)
  {
	  cout<<i<<" -> ";
	 for(int j=0;j<v[i].size();j++)
	  {
		  cout<<v[i][j]<< " ";
	  }cout<<endl;
  } 



	if(dfs(1,0))cout<<"YES";
	else cout<<"NO";
}