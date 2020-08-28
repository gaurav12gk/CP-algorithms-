/*
You have given the stack you have to delete the given element from the stack 
using recursion .
INPUT :-
5
1  2 3 4 5 
3
OUTPUT:-
1 2 4 5 
*/
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
void deletes(stack<int>&s,int middle)
{
if(s.size()==1)return;
else if(s.size()==middle)
{s.pop();
return;}
else 
{ int val=s.top();
s.pop();
    deletes(s,middle);
    s.push(val);
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
        int middle = n/2+bool(n/2);
        deletes(s,middle);
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

