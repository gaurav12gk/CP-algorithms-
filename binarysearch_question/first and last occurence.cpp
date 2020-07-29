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
vi v(n);
loop(i,0,n)cin>>v[i];
int low=0;
int high=n;
int d;
cin>>d;
int res=0;
int rw=0;
while(high>=low)
{
 int    mid=(high+low)/2;
    if(v[mid]==d){
       res=mid;
       high=mid-1;
         }
    else if(v[mid]>d)high=mid-1;
    else low=mid+1;
}low=0,high=n;
while(low<=high){
   int    mid=(high+low)/2;
    if(v[mid]==d){
       rw=mid;
       low=mid+1;
         }
    else if(v[mid]>d)high=mid-1;
    else low=mid+1;
}
cout<<"first occurence at"<<res<<line;

cout<<"last occurence at"<<rw;
}


int main()
{fast
#ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
// ll t;
// cin>>t;
// while(t--)
{
solve();
}

}