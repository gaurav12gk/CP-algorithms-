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
#define inf 1e8
#define vpii vector<pair<int, int>>
#define vpsi vector<pair<string, int>>
#define mii map<int, int>
#define input(v)    \
  for (auto &c : v) \
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
struct Node
{
  int data;
  Node *right;
  Node *left;
};

Node *GetNewNode(int data)
{
  Node *newNode = new Node();
  newNode->data = data;
  newNode->right = newNode->left = NULL;
  return newNode;
}
// Inserting a node in a tree 

Node *insertnode(Node * root, int data)
{
  if(root== NULL)root = GetNewNode(data);
  else if(root->data>= data)
root->left = insertnode(root->left,data);
else if(root->data <=data){
  root->right = insertnode(root->right , data);
}
return root;
}
//-------Searching for the element in the tree  ---------------------------
bool searchbst(Node* root, int x)
{
  if(root == NULL)return false;
  if(root->data == x) return true; 
  if(root->data >= x)searchbst(root->left , x);
  else searchbst(root->right , x);
  return false;
}
//-------Find the maximum element int he tree  ---------------------
int findMax(Node * root) 
{
  if(root == NULL)return -1;
  while(root->right!=NULL)root= root->right;
  return root->data;
}
//---------------------Post order traversal -------------------
void postorder(Node * root) 
{
   if(root== NULL)return ;
   postorder(root->left);
   postorder(root->right);
   cout<<root->data<< " ";
}
//---------------------PRE ORDER TRAVERSAL -=---------------------------------
void preorder(Node* root)
{
  if(root==NULL)return;
  cout<<root->data<<" ";
  preorder(root->left);
  preorder(root->right);
}
//--------------------INORDER TRSVERSAL _ --------------------------------------
void inorder(Node * root)
{
  if(root== NULL)return;
  inorder(root->left);
  cout<<root->data<< " ";
  inorder(root->right);
}
//Finding minimum elelment in the  TREE 
int findmin(Node * root)
{
if(root == NULL)return 1e8 ;
return min(root->data,findmin(root->left));
}
//Getting height of the left subtree
int traverseleft(Node * root)
{
 if(root == NULL)return 0;
 else return 1+traverseleft(root->left);
}
// Getting height of the right subtree 
int traverseright(Node * root)
{
 if(root == NULL)return 0;
 else return 1+traverseright(root->right);
}
//Main helper function start fromn herer 

void solve()
{

  Node *root = NULL;
root = insertnode(root , 10);
root = insertnode(root , 5);
root = insertnode(root, 11);
root = insertnode(root , 1);
root = insertnode(root , 1012);
root = insertnode(root , -191);
root = insertnode(root , -1);
root = insertnode(root , 15);
root = insertnode(root , 1111);
root = insertnode(root , 11112);
preorder(root);
cout<<line;
inorder(root);cout<<line;
postorder(root);cout<<line;
int maxa  = findMax(root);
int mina= findmin(root);
cout<<maxa<<"  "<<mina;
int height=0;
height= max(traverseleft(root),traverseright(root))+1;
cout<<line<<height<<line;

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
