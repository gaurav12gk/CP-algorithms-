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
void space(string ip,string op)
{
if(ip.size()==0){
    cout<<op<<line;
    return;
}
string  op1=op;
string op2=op;
op2.push_back(' ');
op2.push_back(ip[0]);
op1.push_back(ip[0]);
ip.erase(ip.begin()+0);
space(ip,op2);
space(ip,op1);
return; 

}
void solve()
{ 
string a;
cin>>a;
string op="";
op.push_back(a[0]);
a.erase(a.begin()+0);

space(a,op);

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

