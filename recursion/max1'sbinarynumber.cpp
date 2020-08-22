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
void print(int one,int zero,string op,int n)
{
   if(one + zero==n)
   {
      cout<<op<<line;
      return;
   }
   if(zero>one)return;
   string op2=op;
   op2.push_back('1');
   print(one+1,zero,op2,n);
   if(one>zero)
   {
      string op1=op;
      op1.push_back('0');

      print(one,zero+1,op1,n);

   }
   

}
void solve()
{ 
int n;
cin>>n;
int one=0,zero=0;
string op="";
print(one,zero,op,n);
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

