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

void solve()
{ 
int n;
cin>>n;
vector<char> v(n+1);
loop(i,1,n+1)cin>>v[i];
// for(auto c: v)cout<<c<<line;
int high=1;
int low=1;
char ans=0;
int d;
cin>>d;
while(high<=n)
{
 if(v[high]==d){cout<<high;
 return;
 }else if(v[high]>d){
     while(high>=low)
     {
         int mid=(high+low)/2;
         if(v[mid]==d){cout<<mid;
 return;
 }
 else if(v[mid]>d)high=mid-1;
 else low=mid+1;
     }
 }
 else{low=high;
     high=high*2;
     if(high*2>n+1)high=n;
     
 }
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

