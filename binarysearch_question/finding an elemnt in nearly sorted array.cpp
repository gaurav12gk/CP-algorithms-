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
{  int n;
cin>>n;
vi v(n);
loop(i,0,n)
cin>>v[i];

int d;
cin>>d;
int min=0;
// in this the elemnt we have to find is to be generally ar i-1,i+1th poistion or may be at ith position so we 
// aplly normal bs with some condition .

int high=n;
int low=0;
while(low<=high)
{
int mid=(high+low)/2;
if(v[mid]==d){cout<<mid;return;}
else if(mid-1>=low&&v[mid-1]==d){cout<<mid-1; return ;}
else if(mid+1<=high&&v[mid+1]==d){cout<<mid+1;return ;}
else if(v[mid]>d)high=mid-2;
else low=mid+2;


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

