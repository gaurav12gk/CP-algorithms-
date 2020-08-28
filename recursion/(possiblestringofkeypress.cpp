/* You have to find the possible combination when when we press the phone keypad buttons 
input will be a string of any size and output will be the comnbination bases
on the keypress.
eg.
INPUT :-
23
OUTPUT:-
ad
ae
af
bd
be
bf
cd
ce
cf
explanation :- When we press the 2 then the possible alphabets are a,b,c
Since we have the only 2 places to fill so the first place is filled by 2nd button 
i.e a,b,c and the remaining place is filled by the 3rd button i.e.d,e,f 
Exclude the 1,*,#,0
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
int row[]={0,0,1,1,-1,1,-1,-1};
int col[]={1,-1,-1,1,1,0,0,-1};
map<char,string> m;
void numbmap()
{
m['2']="abc";
m['3']="def";
m['4']="jhi";
m['5']="jkl";
m['6']="mno";
m['7']="pqrs";
m['8']="tuv";
m['9']="wzyz";
}
void print(string n,string op,int xi,int pi)
{
    if(op.size()==n.size())
    {cout<<op<<line;
    return;
    }
char a=n[xi];
string s=m[a];
loop(i,0,s.size())
{
    string op1=op;
    op1.push_back(s[i]);

  
    print(n,op1,xi+1,pi+1);
}    
}


void solve()
{ numbmap();

string n;
cin>>n;
string op="";
print(n,op,0,0);
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

