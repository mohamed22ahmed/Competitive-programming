#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

	int n;
	ll x,sum=0;
	cin>>n>>x;
	for(ll i=1;i*i<=x;i++)
		if(x%i==0&&x/i<=n)
		{
			sum++;
			if(i!=x/i)
			  sum++;
	        }
	cout<<sum<<endl;
}