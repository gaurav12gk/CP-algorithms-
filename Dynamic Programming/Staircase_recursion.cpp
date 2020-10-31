/*            ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ             
              ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
               उर्वारुकमिव बन्धनान्मृत्योर्मुक्षीय माऽमृतात् ||                */

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

int stairs(int value,int n,int dp[])
{
  if(value==n)return 1;
  else if(value>n)return 0;
  if(dp[value]!=0){ cout<<"n->"<<n<<"dp[n]=>"<<dp[n]<<line;
  return dp[value];}
  else{
    dp[value]=stairs(value+1,n,dp)+stairs(value+2,n,dp);
   // cout<<"n->"<<n<<"dp[n]=>"<<dp[n]<<line;
    return  dp[value];
  }

}



void solve()
{ int n;
cin>>n;
int dp[n+1]={0};
cout<<stairs(0,n,dp);


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

