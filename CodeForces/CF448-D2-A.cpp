#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

	int n,a1,a2,a3,b1,b2,b3,sum1,sum=0,sum2;
	cin>>a1>>a2>>a3>>b1>>b2>>b3>>n;
	sum1=a1+a2+a3;
	sum2=b1+b2+b3;
	if(sum1%5)
		sum+=sum1/5+1;
	else
		sum+=sum1/5;
	if(sum2%10)
		sum+=sum2/10+1;
	else
		sum+=sum2/10;
    (sum<=n)?cout<<"YES\n":cout<<"NO\n";
}