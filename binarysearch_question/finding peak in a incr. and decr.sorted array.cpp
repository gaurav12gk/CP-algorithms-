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
while(high>=low)
{
    int mid=low+(high-low)/2;
    int next=(mid+1)%n;
    int pre=(mid-1)%n;
    if(v[mid]>=v[next]&&v[mid]>=v[pre])
    {
cout<<"peak is at \n"<<v[mid];
return;

    }
    else if(v[mid]<=v[pre])high=mid-1;
    else if(v[mid]>=v[next])low=mid+1; 
    }
cout<<"notfound";
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

