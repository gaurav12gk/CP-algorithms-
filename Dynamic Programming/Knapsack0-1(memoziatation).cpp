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
int dp[100];
int knapsack(vi wt,vi val,int W,int n)
{
    if(n==0||W==0){return 0;}
   if(dp[n]!=-1)return dp[n];
    else if(wt[n-1]<=W){
    return dp[n]= max(val[n-1]+knapsack(wt,val,W-wt[n-1],n-1),knapsack(wt,val,W,n-1));
   }else if(wt[n-1]>W)
    return dp[n] = knapsack(wt,val,W,n-1);
}



void solve()
{ 
memset(dp,-1,sizeof(dp));
int n;
cin>>n;
vi wt(n),val(n);
int W;
loop(i,0,n)cin>>val[i];
loop(i,0,n)cin>>wt[i];
cin>>W;

cout<<knapsack(wt,val,W,n)<<line;
loop(i,0,100)
{cout<<dp[i]<<line;
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

