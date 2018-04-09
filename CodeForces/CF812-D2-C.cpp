#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
ll n,m,a[100001],sum;
bool BS(ll s)
{
    sum=0;
    ll ar[100001],x;
    mm(i,n)
        x=a[i]+(i+1)*s,ar[i]=x;
    sort(ar,ar+n);
    mm(i,s)
        sum+=ar[i];
    if(sum<=m)
        return 1;
    return 0;
}
int main()
{
    Mo_Ha_Med

    cin>>n>>m;
    mm(i,n)
        cin>>a[i];
    ll l=1,r=n,md,s=0,x=0;
    while(l<=r)
    {
        md=l+(r-l)/2;
        if(BS(md))
            l=md+1,s=sum,x=md;
        else
            r=md-1;
    }
    cout<<x<<" "<<s<<endl;
}
