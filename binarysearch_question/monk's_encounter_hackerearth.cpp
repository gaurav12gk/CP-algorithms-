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
ll a,b,c;
ll k;
//int binary( vector<int> v,int n,int d,int low,int high)
// {int mid=(high+low)>>1;
// int count=0;
//     if(v[mid]==d){cout<<"dind at "<<mid+1<<line;count++; binary(v,n,d,mid+1,high);}
//     else if(d>v[mid])binary(v,n,d,mid+1,high);
//     else if(d<v[mid])binary(v,n,d,low,mid-1);
//    return count; 
// }
ll f(ll mid)
{
    return (a*mid*mid)+(b*mid)+c;
}
void solve()
{ 

		cin>>a>>b>>c;

		cin>>k;
        if(c>=k){cout<<0<<line;return;}
        int low=1;
       int high=ceil(sqrt(k));
       while(high>=low)
       {ll mid;
mid=(low+high)/2;
ll x=f(mid);
ll y=f(mid-1);
if(x>=k&&y<k)
{
    cout<<mid<<line;
    return;
}
         if(x<k)low=mid+1;
       else high=mid-1;

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

