#include<bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define line "\n"
#define loop(i,a,n) for(ll i=a;i<n;i++)
#define ll long long int
#define lld long  double
#define ull unsigned long long int
#define pb push_back
#define vi vector < int >
#define vs vector < string >
#define vb vector < bool >
#define vll vector<ll>
# define pii pair < int , int >
# define pll pair < ll , ll >
# define pld pair < ld , ld >
# define pDD pair < D , D >
# define inf 1e8
#define vpii vector<pair<int,int>>
#define vpsi vector<pair<string,int>>
#define mii map<int ,int>
#define input(v) for(auto &c: v)cin>>c;
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
	const int dx[]={-1,0,1,0};
	const int dy[]={0,1,0,-1};
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
		{ if(n%2){res=((res%mod)*(a%mod))%mod; n--;    }
			else{ a=((a%mod)*(a%mod))%mod; n/=2;
			}}  return res; }  
	  /*-----------------------------------*/
 bool isvowel(char v) { return (0x208222>>(v&0x1f))&1; }
	   
	int bsearch(vector<int> v, int x)
	{
		int low = 0 , high = v.size()-1; 
		while(high>=low)
		{
			int mid = (high+low)>>1; 
			if(v[mid]==x)return mid; 
			else if(v[mid]>x)high =mid-1; 
			else low  =mid +1;
		}
		return -1;

	}  
 
	void solve(int tc)
	{
		//getting inpout from the user  
  int n,m; 
  cin>>n>>m; 
  int x ; 
  cin>>x; 

  vector<vector<int>> v;  
  loop(i,0,n)
  { vector<int> c; 
  int d; 
	  	loop(i,0,m){
			  cin>>d; 
			  c.push_back(d);
		  }
		  v.push_back(c);
  }
  // Real logic starts from here ------------>>> 
  

	

  //
    int high = n-1; 
    int low = 0 ; 
    int ele = -1 ;
	while(high>=low)
	{
		int mid  =(high+low)>>1; 
		if(v[mid][0] == x)
		{
			ele = mid; 
			break;
		}
		else if(v[mid][0] > x)
		{
			ele = mid; 
			high = mid - 1; 
		}
		else low = mid+1;
	}
debug(ele)
  if(ele = -1)ele = n-1;debug(ele)
//Now apply binary search on two rows that is ele and ele - 1 ; 
if(ele == 0)// seerch on the first row only to get the element 
{
 int  p = bsearch(v[ele], x);
 debug(p);
 if(p!=-1){
	 cout<<true; 
 }
 else cout<<false;
}
else { debug(v[ele])debug(ele)
	int p = bsearch(v[ele],x);
	int k = bsearch(v[ele-1],x); 
	
	debug(p)debug(k)
	if(p!=-1 or k!=-1){
cout<<true; 
return ;
	}
	else {
		cout<<false; 
		return;
	}
}

	}

	int main()
	{fast
	#ifndef ONLINE_JUDGE
	freopen("input.txt","r",stdin);
	freopen("output.txt","w",stdout);
	freopen("error.txt","w",stderr);
	#endif
   ll t=1;
   //cin>>t;
   for(int i = 1; i<= t; i++)
	{
	solve(i);
	}

	}

