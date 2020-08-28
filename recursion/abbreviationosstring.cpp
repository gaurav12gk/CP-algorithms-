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
int row[]={0,0,1,1,-1,1,-1,-1};
int col[]={1,-1,-1,1,1,0,0,-1};




void print(string n,string op,int count,int pos)
{
  if(n.size()==pos)
  { if(count==0){
   cout<<op<<line;
    return;}
    else
    {  char a=count+48;
      cout<<op+a<<line;
      return;
    }
  }
  if(count>0)
  print(n,op+(char)(count+48)+n[pos],0,pos+1);
  else 
  print(n,op+n[pos],0,pos+1);

  print(n,op,count+1,pos+1);
}

void solve()
{ 
string n;
cin>>n;
print(n,"",0,0);

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

