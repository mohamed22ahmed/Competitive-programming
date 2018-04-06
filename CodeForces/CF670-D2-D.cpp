#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
vector<ll>a,b;
int n;
bool solution(ll mid,ll k)
{
    if(!mid)
        return 1;
	ll s;
	mm(i,n)
	{
		 s=a[i]*mid;
		 if(s>b[i])
         {
             if(!k||(k+b[i])<s)
                return 0;
             k-=s-b[i];
         }
	}
	return 1;
}
int main()
{
    Mo_Ha_Med

    ll k,x;
    cin>>n>>k;
    mm(i,n)
        cin>>x,a.push_back(x);
    mm(i,n)
        cin>>x,b.push_back(x);
    ll mid,l=0,r=1e10,s=0;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(solution(mid,k))
            s=mid,l=mid+1;
        else
            r=mid-1;
    }
    cout<<s<<endl;
}
