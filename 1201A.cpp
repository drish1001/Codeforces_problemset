#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll n, x, y, cnt=0,la;
	cin >> n >> x >> y;
	vector<ll> v;
	for(ll i=0;i<n;i++)
	{
		cin >> la;
		v.push_back(la);
	}

	for(ll i=x;i<n-y;i++)
	{
		ll j = x;
		ll k  = y;
		ll la=i;
		while(v[la-j]>v[i])
		{
			cnt++;
			j--;
		}
		//cout << " cnt " << cnt << " j "<< j <<  endl;

		while(v[la+k]>v[i])
		{
			cnt++;
			k--;
		}
		//cout << " cnt " << cnt << " k "<< k <<  endl;
		if(cnt=x+y)
		{
			cout << i+1 ;
			return 0;
		}
		cnt=0;
	}	
	return 0;
}


