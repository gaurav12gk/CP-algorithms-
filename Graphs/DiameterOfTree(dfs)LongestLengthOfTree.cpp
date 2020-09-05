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
    vi v[100];
    bool visited[100];
    int maxt=-1,maxnode;
    void dfs(int node,int pathsize)
    {
        visited[node]=1;
        if(maxt<pathsize)
        { maxt=pathsize;
            maxnode=node;
        }
          for(int child:v[node])
          {
              if(!visited[child])
              {
                dfs(child,pathsize+1);
              }
          }
    }
    
    
    void solve()
    { 
    int n,e;
        cin>>n>>e;
        while(e--)
        {
            int a,b;
            cin>>a>>b;
            v[a].push_back(b);
            v[b].push_back(a);
            
        }
        dfs(1,0);
    
    int a=maxnode;
    
    maxt=-1;
    memset(visited,0,sizeof(visited));
    dfs(a,0);
    

cout<<line<<maxt;
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
    
    