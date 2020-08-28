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


void print(int one,int zero,int n,string op)
{
    if(one+zero==n)//&&(one==2))
    {  if(one==4)
      {  cout<<op<<line;
       
        return;
    }return;
    }
    if(one>4)return;
    string op1=op;
    string op2=op;
    op1.push_back('1');
    op2.push_back('0');
    print(one+1, zero,n,op1);
    print(one,zero+1,n,op2);
    
}

void solve()
{ 
int n;
cin>>n;
string op="";
print(0,0,n,op);
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

