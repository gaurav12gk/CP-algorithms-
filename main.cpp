#include<bits/stdc++.h>
#define ll long long

#define int long long int
#define loop(i, a, n) for (ll i = a; i < n; i++)
using namespace std;
int n, m;
bool vis[10001][10001];
int sx, sy, ex, ey;
char v[10001][10001];
// vector<vector<pair<int,int>>> path;
int32_t main()
{
  #ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
  int n,m;
  cin>>n>>m;
    loop(i, 1, n + 1)
   loop(j, 1, m + 1)
    cin >> v[i][j];
    //    path.resize(n);
	for(int i = 1; i < n+1; ++i)
	{
		path[i].resize(m);
	
	}
	for (int i = 0; i < n+1; ++i) 
  	for (int j = 0; i < m+1; ++j)
  {
 path[i][j]={-1,-1};
 
    if (v[i][j] == 'A')
    {
      sx = i, sy = j;
      break;
    }
    if (v[i][j] == 'B')
    {
      ex = i, ey = j;
      break;
    }
  }
    for(auto c: path)
  for(auto m: c)cout<<m.first<<" "<<m.second;


}