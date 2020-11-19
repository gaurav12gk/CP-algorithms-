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




void solve()
{ 

int n;
cin>>n;
vi v(n);
loop(i,0,n)cin>>v[i];
int check=0;
cin>>check;


loop(i,0,1<<v.size())
{int count=0;
  loop(j,0,8)  // for checking the set bit 
  {
     int f=1<<j;
     if(f&i)count+=v[j];
       }cout<<count<<line;
  if(count==check){
    cout<<"YES";
    return;
  }

}
cout<<"NO";
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

