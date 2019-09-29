#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll t;
	cin >> t;
	while(t--)
	{
		ll a, b, c, diff=0;
		cin >> a >> b >> c;
		if(b >=a)
		{
			ll temp = b;
			b=a;
			a=temp;
		}
		if(a >= b)
		{
			diff = a-b;
			while(diff && c)
			{
				b++;
				c--;
				diff--;
			}
			if(c)
			{
				cout <<  a+(c/2) << endl;
			}	
			else 
			{
				cout <<  b << endl;
			}
		}
	}
	return 0;
}

