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
		ll b,p,f,h,c,cost=0;
		cin >> b >> p >> f >> h >> c;
		b/=2;

		if(c>=h)
		{
			while((f--)&&(b>0))
			{
				b--;
				cost+=c;
			}
			while((p--)&&(b>0))
			{
				b--;
				cost+=h;
			}
		}
		else
		{
			while((p--)&&(b>0))
			{
				b--;
				cost+=h;
			}
			while((f--)&&(b>0))
			{
				b--;
				cost+=c;
			}
		}
		cout << cost << endl;
	}
	return 0;
}

