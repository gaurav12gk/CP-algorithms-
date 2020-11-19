//             ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ ॐ          //    
/*               ॐ त्र्यम्बकं यजामहे सुगन्धिं पुष्टिवर्धनम् |
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
ll sum=0;
//*******************************************************************
bool prime[2000001];
vi v;
void sieve(int n)
{ prime[0]=prime[1]=true;
    for(int i=2;i*i<=n;i++)
    {
        for(int j=i*i;j<=n;j+=i)
        {
            prime[j]=true;
        }
    }
    loop(i,1,n)
    if(prime[i]==false)sum+=i;
}
//*******************************************************************



void solve()
{ 
sieve(2000001);
cout<<sum;
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

