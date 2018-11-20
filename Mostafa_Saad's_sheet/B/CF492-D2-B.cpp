#include <bits/stdc++.h>

#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
#define  rr(i,n)     for(int i=1;i<=n;i++)
#define  nn(i,n)     for(int i=n-1;i>=0;i--)
#define  xx(i,r,n)   for(int i=r;i<n;i++)
#define  M(a,n)      memset(a,n,sizeof a)
#define  all(v)      ((v).begin()),((v).end())
#define  sz(v)       ((int)(v).size())
#define  L           1000000000000000000
#define  mod         1e9+7
#define  OO          0x3f3f3f3f
#define  EPS         1e-10

typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;

int main()
{
    Mo_Ha_Med

    int n,m,a[1000];
    cin>>n>>m;
    mm(i,n)
        cin>>a[i];
    sort(a,a+n);
    int mx=-10000;
    for(int i=1;i<n;i++)
        mx=max(mx,(a[i]-a[i-1]));
    double x=mx/2.0;
    if(a[0]!=0)
        x=max(x,(double)a[0]);
    if(a[n-1]!=m)
        x=max(x,(m-(double)a[n-1]));
    cout<<fixed<<setprecision(10)<<x<<endl;
}
