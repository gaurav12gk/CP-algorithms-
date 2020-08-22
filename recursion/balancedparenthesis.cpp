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
vs s;
void part(int open,int close,string op)
{
    if(open==0&&close==0)
    {
       cout<<op<<line;
       return;
    }
 if(open!=0)
 {
       string op2=op;
        op2.push_back('(');
       
        part(open-1,close,op2);
 }
 if(open<close)
 {
       string op2=op;
        op2.push_back(')');
       
        part(open,close-1,op2);
 }
 return;
    
}
void solve()
{ 
int n;
cin>>n;
int open=n;
int close=n;
string op="";
part(open,close,op);

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

