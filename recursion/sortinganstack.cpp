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
void insert(stack<int> &s,int temp)
{
    if(s.size()==0||s.top()<=temp)
    {
        s.push(temp);
        return;
    }
    else
    {
    int a=s.top();
    s.pop();
    insert(s,temp);
    s.push(a);
    return;
    }
    
}
void sorts(stack<int> &s)
{
    if(s.size()==1)return;
    else 
    {
         int a=s.top();
         s.pop();
         sorts(s);
         insert(s,a);
         return;
    }
}
void solve()
{ 
    int n;
    cin>>n;
    stack<int> s;
    loop(i,0,n)
    {int a;
    cin>>a;s.push(a);
        }   
       sorts(s);
       while(!s.empty())
       {
           cout<<s.top()<<line;
           s.pop();
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

 