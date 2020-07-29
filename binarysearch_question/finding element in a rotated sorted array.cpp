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
int leftbs(vi v,int b,int a,int r)
{int d=r;
   int   high=a;
    int low=b;

    while(low<=high)
    {    int mid=(high+low)/2;
        if(v[mid]==d){
            cout<<mid;
            return mid;
        }
        else if(v[mid]>d)
        high=mid-1;
        else low=mid+1;
    }

return -1;
}
int rightbs(vi v,int a,int b ,int r)
{int d=r;
 int high= b;
  int   low=a;
   
    while (low<=high)
    { int mid=(high+low)/2;
        if(v[mid]==d){
            cout<<mid;
            return mid+1;
        }
        else if(v[mid]>d)
        high=mid-1;
        else low=mid+1;
    }
return -1;
}

void solve()
{  int n;
cin>>n;
vi v(n);
loop(i,0,n)
cin>>v[i];

int d;
cin>>d;
int min=0;
//basic concept of finding how many times a sortedarray is sorted is to find the 
//minimum arrary index and sub it from end of  array 
int high=n;
int low=0;
while(low<=high)
{
int mid=(high+low)/2;
int next=(mid+1)%n;
int pre=(mid-1)%n;
// we use mid+1%n cause for the array last and first index value it gives 
// the coorerect code .
if(v[mid]<=v[next]&&v[mid]<=v[pre])
{
    min=mid;
    break;
}
else if(v[mid]>=v[high])
{low=mid+1;
// cout<<"right"<<line;
    
}
else if(v[mid]<=v[low]){
high=mid-1;}//cout<<"left"<<line;}

}///checking for the number .............

// if(v[min]==d)cout<<d<<line<<"found";

int x=leftbs(v,0,min-1,d);
int y=rightbs(v,min,n,d);
if(x!=-1)cout<<x<<"left\n";
else if(y!=-1)cout<<y<<"right\n";
else cout<<"not found";
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

