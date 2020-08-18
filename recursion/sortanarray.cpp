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
void insers(vector<int> &a,int ele)

{
if(a.size()==0||a[a.size()-1]<=ele)
{a.push_back(ele);
return;}
int val=a[a.size()-1];
a.pop_back();
insers(a,ele);
a.push_back(val);

}
void sorti(vector<int> &a)
{
if(a.size()==1)return ;
int temp=a[a.size()-1];
a.pop_back();
sorti(a);
insers(a,temp);

}
void solve()
{ 
int n;
cin>>n;
vi v;
loop(i,0,n)
cin>>v[i];
sorti(v);
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

