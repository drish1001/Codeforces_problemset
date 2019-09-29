#include <bits/stdc++.h>
#define ll long long
#define pb push_back
#define pll pair<ll,ll>
using namespace std;

int main()
{
	ll n;
	cin >> n;
	string s;
	cin >> s;
	ll a,cnt =0, d=n;
	if(n%2==0)
	{
		while(n--)
		{
			if(s[n]-'0'==0)
			{
				cnt++;
			}
		}
		if(cnt==d/2)
		{
			cout << "2" << endl << s.substr(0,d-1) << " " << s.substr(d-1,1);
			return 0;
		}
	}
	cout << 1 << endl << s;
	return 0;
}

