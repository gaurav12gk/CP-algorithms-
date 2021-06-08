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
    #define callcheck cout<<"called\n";
    #define printvector(v) for(auto c: v)cout<<c<<" ";
    # define fast ios_base::sync_with_stdio(false) ; cin.tie(0) ; cout.tie(0);
    using namespace std;
    const int row[]={0,0,1,1,-1,1,-1,-1};
    const int col[]={1,-1,-1,1,1,0,0,-1};
    bool visit[100001];
    vi prime;
    /*----------------Euclid-------------------*/
    ll gcd(int a,int b)
    { if(b==0)return a;
        else return gcd(b,a%b); }
    /*--------------Sieve---------------------*/
    void sieve(int n)
    { for(int i=2;i*i<=n;i++)
         for(int j=i*i;j<=n;j+=i)
            visit[j]=true;
          loop(i,2,n+1) if(visit[i]==false)prime.push_back(i); }
    /*------------------Power-----------------*/
    ll power(ll a,ll n)
    { int res=1; while(n)
        { if(n%2){res=((res%MOD)*(a%MOD))%MOD; n--;    }
            else{ a=((a%MOD)*(a%MOD))%MOD; n/=2;
            }}  return res; }  
      /*-----------------------------------*/
        
      
 
    void solve()
    { 
int n;
cin>>n;
int p=n;
set<int> s;

while(n--)
{int a;
cin>>a;

    s.insert(a);

}
cout<<s.size();
 
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

