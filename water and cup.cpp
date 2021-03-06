#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
typedef unsigned long long ull;
#define pb push_back
#define F first
#define S second
#define all(v) v.begin(),v.end()
#define Mid(b,e) b+(e-b)/2
#define inf 1e18
double PI=2*acos(0.0);

//---------------------------------------------------------------------------//
//Timus: 314795JS
//knight moves
// ll X[8] = {2, 1, -1, -2, -2, -1, 1, 2};
// ll Y[8] = {1, 2, 2, 1, -1, -2, -2, -1};
// ll dx[]={1,-1,0,0};
// ll dy[]={0,0,1,-1};
void yesNo(bool ck){cout<<(ck? "YES\n":"NO\n");}
//------------------------------------------------------------------------------//


const ll p=29;
const ll N=2e3+50;
const ll mod=1e9+7;

bool solve(ll a,ll b,ll c){
	if(c>max(a,b)){return 0;}
	ll gcd=__gcd(a,b);
	if(gcd!=1){
		if(c%gcd==0){return 1;}
		return 0;
	}
	return 1;
}


int main(){

	//freopen("input.txt", "r", stdin);
	//freopen("output.txt", "w", stdout);
	//ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);



	ll t=1; cin>>t;
	for(ll T=1; T<=t; T++){
		ll a,b,c;
		cin>>a>>b>>c;
		bool isPossible=solve(a,b,c);
		yesNo(isPossible);
	}
	return 0;
}



