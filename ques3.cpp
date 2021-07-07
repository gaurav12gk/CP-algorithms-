#include<bits/stdc++.h>
typedef long long ll;
using namespace std;

bool visited[10000];
vector<ll> vs;
	ll n,m,t,c;
	ll cnt = 0;
	map<ll,vector<ll> > ms;
void dfs(ll v){
    visited[v] = true;
			cnt++;
//cout<<v<<"\n";
	if(v == n){
		vs.push_back(cnt-1);
		visited[v] = false;
			cnt--;
			return;
	}
	for(auto h: ms[v]){
		if(!visited[h]){
			
			dfs(h);
			
		}
	}
	visited[v] = false;
			cnt--;
}
int main(){
      #ifndef ONLINE_JUDGE
 freopen("input.txt","r",stdin);
 freopen("output.txt","w",stdout);
 #endif
	ios_base::sync_with_stdio(false);
    cin.tie(NULL);

	cin>>n>>m>>t>>c;

	ll a,b;
	for(ll i = 0;i<m;i++){
		cin>>a>>b;
		ms[a].push_back(b);
		ms[b].push_back(a);
	}
	
	dfs(1);
	sort(vs.begin(),vs.end());

ll iskans = -1;
	for(auto u:vs){
	
		if( u != vs[0]){
			iskans = u;
			break;
		}
	}
	if(iskans == -1){
cout<<"-1"<<"\n";
return 0;
	}
	
	ll ans = iskans*c;
	
	ll nooftimes = ans/c;
	nooftimes -= 1;
	ll curtime = c;
	ll extradd = 0;
if(t == 0){
	cout<<ans<<"\n";
	return 0;
}

	while(nooftimes > 0){
		ll times = 0;
		if(curtime%t != 0 && t <= curtime){
			times = curtime/t;
			times += 1;
		}
		else {
			if(t <= curtime){
			times = curtime/t;
			}
		}
		if(times%2 == 0 && t <= curtime){
	
			extradd += (times*t - curtime);
		}
		nooftimes--;
		
	}

	ll nyavala = extradd + ans;
	
	
	
	

	 ans = (vs[0])*c;

	 nooftimes = ans/c;
	nooftimes -= 1;
	 curtime = c;
	 extradd = 0;
if(t == 0){
	cout<<ans<<"\n";
	return 0;
}

	while(nooftimes > 0){
		ll times = 0;
		if(curtime%t != 0 && t <= curtime){
			times = curtime/t;
			times += 1;
		}
		else {
			if(t <= curtime){
			times = curtime/t;
			}
		}
		if(times%2 == 0 && t <= curtime){
		
			extradd += (times*t - curtime);
		}
		nooftimes--;
		
	}

	ll puranavala = extradd + ans;
	if(puranavala == nyavala){
	    cout<<"-1"<<"\n";
	}
	else{
	    cout<<nyavala<<"\n";
	}
}