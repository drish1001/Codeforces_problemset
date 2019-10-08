#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define 	mp 				make_pair
#define 	ff 				first
#define 	ss 				second
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll l, r;
	cin >> l >> r;
	for(ll i =l; i <= r; i++)
	{
		ll k = i;
		ll cnt = 0;
		set<int> s;
		while(k>0)
		{
			s.insert(k%10);
			k=k/10;
			cnt ++;
		}
		//cout << "cnt" << cnt <<  endl;
		if(s.size()==cnt)
		{
			cout << i << endl;
			return 0;
		}
	}
	cout << "-1" << endl;
	return 0;	
}
