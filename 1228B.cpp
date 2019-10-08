        #include <bits/stdc++.h>
        #define ll long long
        #define pb push_back
        #define 	mp 				make_pair
        #define 	ff 				first
        #define 	ss 				second
        #define pll pair<ll,ll>
        #define		MOD				1000000007
        using namespace std;
         
        int main()
        {
        	ll r, c;
        	cin >> r >> c;
        	ll a[2000][2000];
        	ll row[r+1];
        	ll col[c+1];
        	for(ll i=1;i<=r;i++)
        	{
        		cin >> row[i];
        	}
        	
        	for(ll i=1;i<=c;i++)
        	{
        		cin >> col[i];
        	}
         
        	cout << endl;
        	for(ll i=1;i<=r;i++)
        	{
        		for(ll j=1;j<=c;j++)
        		{
        			if((j<=row[i])||(i<=col[j]))
        			{
        				a[i][j] = 1;
        				//cout << i << "    " << j << endl;
        			}
        			else
        			{
        				a[i][j] = 0;
        				//cout << i << "  0  " << j << endl;
        			}
        		}
        	}
         
        	ll nrow[r];
        	ll ncol[c];
        	for(ll i=1;i<=r;i++)
        	{
        		ll cnt=0;
        		ll j=1;
        		while((a[i][j]==1)&&(j<=c))
        		{
        			cnt++;
        			j++;
        		}
        		nrow[i] = cnt;
        		//cout << nrow[i] << " ";
        	} 
        	cout << endl;
        	for(ll j=1;j<=c;j++)
        	{
        		ll cnt=0;
        		ll i=1;
        		while((a[i][j]==1)&&(i<=r))
        		{
        			cnt++;
        			i++;
        		}
        		ncol[j] = cnt;
        		//cout << ncol[j] << " ";
        	} 
        	for(ll i=1;i<=r;i++)
        	{
        		if(nrow[i]!=row[i])
        		{
        			cout << "0";
        			return 0;
        		}
        	}
        	
        	for(ll i=1;i<=c;i++)
        	{
        		if(ncol[i]!=col[i])
        		{
        			cout << "0";
        			return 0;
        		}
        	}
        	
        	for(ll i=1;i<=r;i++)
        	{
        		if(row[i]<c)
        		{
        			a[i][row[i]+1]=-1;
        		}
        	}
        	
        	for(ll i=1;i<=c;i++)
        	{
        		if(col[i]<r)
        		{
        			a[col[i]+1][i]=-1;
        		}
        	}
        	//cout << endl << endl;
        	ll x =0;	
        	for(ll i=1;i<=r;i++)
        	{
        		for(ll j=1;j<=c;j++)
        		{
        			if( a[i][j] == 0)
        			{
        			x++;
        			}
        		}
        	}	
        	ll ans =1;
        	while(x--)
        	{
        		ans = ans*2;
        		ans %= MOD;
        	}
        	cout << ans;
         
        	return 0;	
        }
