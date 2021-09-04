#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007
#define line "\n"
#define loop(i, a, n) for (ll i = a; i < n; i++)
#define ll long long int
#define lld long double
#define ull unsigned long long int
#define pb push_back
#define vi vector<int>
#define vs vector<string>
#define vb vector<bool>
#define vll vector<ll>
#define pii pair<int, int>
#define pll pair<ll, ll>
#define pld pair<ld, ld>
#define pDD pair<D, D>
#define vpii vector<pair<int, int>>
#define vpsi vector<pair<string, int>>
#define mii map<int, int>
#define inputvector(v) \
  for (auto &c : v)    \
    cin >> c;
#define mis map<int, string>
#define all(v) v.begin(), v.end()
#define fast                        \
  ios_base::sync_with_stdio(false); \
  cin.tie(0);                       \
  cout.tie(0);

#ifndef ONLINE_JUDGE
#define debug(x)     \
  cerr << #x << " "; \
  _print(x);         \
  cerr << endl;
#else
#define debug(x)
#endif

void _print(ll t)
{
  cerr << t;
}
void _print(int t) { cerr << t; }
void _print(string t) { cerr << t; }
void _print(char t) { cerr << t; }
void _print(lld t) { cerr << t; }
void _print(double t) { cerr << t; }
void _print(ull t) { cerr << t; }

template <class T, class V>
void _print(pair<T, V> p);
template <class T>
void _print(vector<T> v);
template <class T>
void _print(set<T> v);
template <class T, class V>
void _print(map<T, V> v);
template <class T>
void _print(multiset<T> v);
template <class T, class V>
void _print(pair<T, V> p)
{
  cerr << "{";
  _print(p.first);
  cerr << ",";
  _print(p.second);
  cerr << "}";
}
template <class T>
void _print(vector<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(set<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T>
void _print(multiset<T> v)
{
  cerr << "[ ";
  for (T i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}
template <class T, class V>
void _print(map<T, V> v)
{
  cerr << "[ ";
  for (auto i : v)
  {
    _print(i);
    cerr << " ";
  }
  cerr << "]";
}

const int dx8[] = {0, 0, 1, 1, -1, 1, -1, -1};
const int dy8[] = {1, -1, -1, 1, 1, 0, 0, -1};
const int dx[] = {-1, 0, 1, 0};
const int dy[] = {0, 1, 0, -1};
// bool visit[100001];
// vi prime;
/*----------------Euclid-------------------*/
ll gcd(int a, int b)
{
  if (b == 0)
    return a;
  else
    return gcd(b, a % b);
}
/*--------------Sieve---------------------*/
/*  void sieve(int n)
    { for(int i=2;i*i<=n;i++)
         for(int j=i*i;j<=n;j+=i)
            visit[j]=true;
          loop(i,2,n+1) if(visit[i]==false)prime.push_back(i); },*/
/*------------------Power-----------------*/
ll power(ll a, ll n)
{
  int res = 1;
  while (n)
  {
    if (n % 2)
    {
      res = ((res % mod) * (a % mod)) % mod;
      n--;
    }
    else
    {
      a = ((a % mod) * (a % mod)) % mod;
      n /= 2;
    }
  }
  return res;
}
/*-----------------------------------*/
string findLcs(string s1,string s2){
   int dp[s1.size() + 1][s2.size() + 1];
  loop(i, 0, s1.size() + 1)
      loop(j, 0, s2.size() + 1)
  {
    if (i == 0 or j == 0)
    {
      dp[i][j] = 0;
    }
    else if (s1[i - 1] == s2[j - 1])
      dp[i][j] = dp[i - 1][j - 1] + 1;
    else
      dp[i][j] = max(dp[i - 1][j], dp[i][j - 1]);
  }
  cout << dp[s1.size()][s2.size()];

//Getting  of the LCS string 

  char s[dp[s1.size()][s2.size()]];
  int index=dp[s1.size()][s2.size()]-1;
  int kk=index;
  int i = s1.size(), j = s2.size();
  while (i >= 0 and j >= 0 &&index>=0)
  {
    if(s1[i-1]==s2[j-1])
    { debug(index);
       debug(s1[i-1]);
      s[index--]=s2[j-1];
      
      i--,j--;
    }
    else if(dp[i-1][j]>dp[i][j-1])i--;
    else j--;

  }


  string ans = "";


  // Now finding the value of shortest supersequence using the str1 and str2 
  // scs= length(str1)+length(str2)- length of lcs
  loop(i,0,kk+1)cout<<s[i];
i=0;  
int r=0,t=0;
while(i<=kk)
{
while(s1[r]!=s[i]){
  ans+=s1[r];
  r++;
  }

while(s2[t]!=s[i]){
  ans+=s2[t];
  t++;
  }
ans+=s[i];
i++,r++,t++;
}
debug(ans);
}
void solve()
{
  string s1, s2;
  cin >> s1 >> s2;
 

  // Retreiving the value of the LCS string ---------------------------------
  
// reverse(s.begin(),s.end());
// cerr<<s;
  //    for(int i=s1.size();i>=0;i--)
  // {
  //    for(int j=s2.size();j>=0;j--)
  //     {

  //     }
  //     }
}

int main()
{
  fast
#ifndef ONLINE_JUDGE
      freopen("input.txt", "r", stdin);
  freopen("output.txt", "w", stdout);
  freopen("error.txt", "w", stderr);
#endif
  // ll t;
  // cin>>t;
  // while(t--)
  {
    solve();
  }
}
