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

bool vis[101][101];
int n, m;
int per = 0;

bool isvalid(int x, int y)
{
  if (x < 0 || y < 0 || x > n - 1 || y > m - 1)
    return false;

  return true;
}
void bfs(int x, int y, vector<vector<int>> &grid)
{
  const int dx[] = {-1, 0, 1, 0};
  const int dy[] = {0, 1, 0, -1};
  queue<pair<int, int>> q;
  q.push({x, y});
  vis[x][y] = 1;
  while (!q.empty())
  {
    int curx = q.front().first;
    int cury = q.front().second;
    q.pop();
    for (int i = 0; i < 4; i++)
    {
      int nx = curx + dx[i];
      int ny = cury + dy[i];
      if (isvalid(nx, ny) && grid[nx][ny] != 0 && vis[nx][ny] == 0)
      {
        vis[nx][ny] = 1;
        q.push({nx, ny});
      }
      else if (!isvalid(nx, ny) || grid[nx][ny] == 0)
      {    debug(nx);
      debug(ny);
          per++;
    }}
  }
}
int islandPerimeter(vector<vector<int>> &grid)
{

  n = grid.size();
  m = grid[0].size();
  for (int i = 0; i < grid.size(); i++)
    for (int j = 0; j < grid[0].size(); j++)
      if (grid[i][j] == 1)
      { 
        bfs(i, j, grid);
        break;
      }

  return per;
}

void solve()
{
  vector<vi> grid(4,vi(4,0));
  loop(i, 0, 4) loop(j, 0, 4) cin >> grid[i][j];
  cout << islandPerimeter(grid);
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
