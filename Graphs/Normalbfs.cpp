#include<bits/stdc++.h>
#define MOD 1000000007
#define line "\n"
#define loop(i,a,n) for(ll i=a;i<n;i++)
#define ll long long int
#define lb long double
#define ull unsigned long long int
#define pb push_back
#define vi vector < int >
# define vs vector < string >
# define vb vector < bool >
#define vll vector<ll>
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
#define vpii vector<pair<int,int>>
#define vpsi vector<pair<string,int>>
#define mii map<int ,int>
#define mis map<int,string>
#define all(v) v.begin(),v.end()
# define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
using namespace std;
const int row[]={0,0,1,1,-1,1,-1,-1};
const int col[]={1,-1,-1,1,1,0,0,-1};

int visited[6];
vi v[6];
void bfs(int source)
{
    visited[source]=1;
    queue<int> q;
    q.push(source);
    while(!q.empty())
    {
int current = q.front();
q.pop();
cout<<current<<line;
for(int i=0;i<v[current].size();i++)
{
    int child=v[current][i];
    if(visited[child]==0)
    {
       
        q.push(child);
        visited[child]=1;
    }
      
}


    }
}
void solve()
{
    int n,m;
    cin>>n>>m;
    int x,y;
   
    loop(i,0,m)
    {
        cin>>x>>y;
        v[x].pb(y);
        v[y].pb(x);
    }
   bfs(1);
   loop(i,1,n+1)
{
    cout<<i<<"-> ";
    loop(j,0,v[i].size())
    {
        cout<<v[i][j]<< ",";
    }
    cout<<line;
}
}

int main()
{fast
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
ll t;
cin>>t;
while(t--)
{
solve();
}

}

