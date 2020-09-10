/*            ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ             
			  ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
			   उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||                */
#include <bits/stdc++.h>
using namespace std;
vector<int> v[1000];
int vis[1000];
void dfs(int node)
{
	vis[node]=1;
	for(int child: v[node])
	{
		if(!vis[child])
		{dfs(child);}
	}
}
int main() {
    #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
	int n,e;
	cin>>n>>e;
	int p=e;
	for(int i=0;i<e;i++)
	{
		int a;
		cin>>a;
		int b;
		cin>>b;
		v[a].push_back(b);
		v[b].push_back(a);
	}int count=0;
	for(int i=1;i<=n;i++)
	{
		if(!vis[i])
		dfs(i),count++;
	}
	if(count==1&&e==n-1)
	cout<<"YES";
	else cout<<"NO";
	return 0;
}