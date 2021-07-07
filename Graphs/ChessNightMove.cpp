    #include<bits/stdc++.h>
    using namespace std;
    #define MOD 1000000007
    #define line "\n"
    #define loop(i,a,n) for(ll i=a;i<n;i++)
    #define ll long long int
    #define lld long  double
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
    
#ifndef ONLINE_JUDGE
#define debug(x) cerr << #x <<" "; _print(x); cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t) {cerr << t;}
void _print(int t) {cerr << t;}
void _print(string t) {cerr << t;}
void _print(char t) {cerr << t;}
void _print(lld t) {cerr << t;}
void _print(double t) {cerr << t;}
void _print(ull t) {cerr << t;}

template <class T, class V> void _print(pair <T, V> p);
template <class T> void _print(vector <T> v);
template <class T> void _print(set <T> v);
template <class T, class V> void _print(map <T, V> v);
template <class T> void _print(multiset <T> v);
template <class T, class V> void _print(pair <T, V> p) {cerr << "{"; _print(p.first); cerr << ","; _print(p.second); cerr << "}";}
template <class T> void _print(vector <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(set <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T> void _print(multiset <T> v) {cerr << "[ "; for (T i : v) {_print(i); cerr << " ";} cerr << "]";}
template <class T, class V> void _print(map <T, V> v) {cerr << "[ "; for (auto i : v) {_print(i); cerr << " ";} cerr << "]";}


    const int dx8[]={0,0,1,1,-1,1,-1,-1};
    const int dy8[]={1,-1,-1,1,1,0,0,-1};
	const int dx[]={-2,-2,2,2,1,1,-1,-1};
	const int dy[]={-1,1,-1,1,2,-2,-2,2};
       const char check[]={'U','R','D','L'};
   // bool visit[100001];
   // vi prime;
    /*----------------Euclid-------------------*/
    ll gcd(int a,int b)
    { if(b==0)return a;
        else return gcd(b,a%b); }
    /*--------------Sieve---------------------*/
  /*  void sieve(int n)
    { for(int i=2;i*i<=n;i++)
         for(int j=i*i;j<=n;j+=i)
            visit[j]=true;
          loop(i,2,n+1) if(visit[i]==false)prime.push_back(i); },*/
    /*------------------Power-----------------*/
    ll power(ll a,ll n)
    { int res=1; while(n)
        { if(n%2){res=((res%MOD)*(a%MOD))%MOD; n--;    }
            else{ a=((a%MOD)*(a%MOD))%MOD; n/=2;
            }}  return res; }  
      /*-----------------------------------*/
        int n;
bool vis[9][9];
        int dis[31][31];
          bool isvalid(int x,int y)
	  {
		  if(x>9||y>9||x<1||y<1) return false;
          if(vis[x][y]==1)return false;
		 else  return true;
	  }

     void bfs(int srcx,int srcy)
     {
         queue<pii> q;
         q.push({srcx,srcy});
         vis[srcx][srcy]=1;
         dis[srcx][srcy]=0;
         while(!q.empty())
         {
             int curx=q.front().first;
             int cury=q.front().second;
             q.pop();
            loop(i,0,8)
            {         
                if(isvalid(curx+dx[i],cury+dy[i]))
                {  
             dis[curx+dx[i]][cury+dy[i]]=dis[curx][cury]+1;
                    vis[curx+dx[i]][cury+dy[i]]=1;
                    q.push({curx+dx[i],cury+dy[i]});
                }

            }
         }
     } 
 
    void solve()
    { 
 string a,b;
cin>>a>>b;
memset(vis,0,sizeof(vis));
int sx,sy,ex,ey;
sx=(int)a[0]-96;
sy=(int)a[1]-'0';
ex=(int)b[0]-96;
ey=(int)b[1]-'0';

debug(sx);
debug(sy);
debug(ex);
debug(ey);
  bfs(sx,sy);
   cout<<dis[ex][ey];
   cout<<line;
  
 
    }

    int main()
    {fast
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("error.txt","w",stderr);
    #endif
  ll t;
  cin>>t;
  while(t--)
    {
    solve();
    }

    }

