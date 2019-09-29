#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll t, cnt;
	cin >> t;
	
	while(t--)
	{
		ll n,x,y;
		cnt=0;	
		
		cin >> n;
		n*=4;
		vector<ll> v(n);
		for(ll i=0;i<n;i++) 
		{
			cin>>x;
			v.push_back(x);
		}
		sort(v.begin(),v.end());
		ll ch = v[0]*v[n-1];
		for(ll i=2;i<n/2;i+=2)
		{
			if(v[i]*v[n-1-i]!=ch)
			{
				cnt++;
			}
		}
		if(cnt==0)
		{
				cout << "YES" << endl;
		}
		else
		{
			cout << "NO" << endl;
		}
	}
	return 0;
}

