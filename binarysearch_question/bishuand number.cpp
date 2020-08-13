#include<bits/stdc++.h>

using namespace std;

#define ll long long int

#define rep(i,b) for (ll i =1; i <= (b); i++)

#define mod 1000000007

#define test int t; cin>>t; while(t--)

int main(){

ll n;

cin>>n;

ll arr[n+1];

ll sum[n+1];

sum[0]=0;

rep(i,n){

cin>>arr[i];

sum[i]=sum[i-1]+arr[i];

}

sort(arr+1,arr+n+1);

rep(i,n){

sum[i]=sum[i-1]+arr[i];

}

ll q;

cin>>q;

rep(i,q){

ll x;

cin>>x;

auto in=upper_bound(arr+1,arr+n+1,x) - (arr+1);

cout<<in<<" "<<sum[in]<<endl;

}

}

