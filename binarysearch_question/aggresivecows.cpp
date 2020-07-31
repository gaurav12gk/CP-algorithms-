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
int check(vll v,ll c,ll a,ll n)
{
  int count=1;
  ll last=v[0];
  loop(i,1,n)
  {
    if(v[i]-last>=a){count++;last=v[i];}
    if(count==c){//cout<<"GOTCGA"<<line;
    return 1;}
  }
  return 0;
}

void solve()
{ 
  ll c;
  cin>>c;
  ll n;
  cin>>n;
  vll v(n);
  loop(i,0,n)cin>>v[i]; sort(all(v)); 
  ll high=v[n-1]-v[0];
  ll low=0;
  ll ans=0;
 
  while(high>=low)
  {
    ll mid=low+(high-low)/2;
    if(check(v,c,mid,n)==1){ans=mid;low=mid+1;}
    else high=mid-1;
  }
cout<<ans<<line;
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

