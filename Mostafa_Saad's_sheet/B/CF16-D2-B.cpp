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

    int n,m;
    cin>>n>>m;
    pair<int,int>a[m];
    mm(i,m)
        cin>>a[i].second>>a[i].first;
    sort(a,a+m);
    reverse(a,a+m);
    long long sum=0;
    mm(i,m)
    {
        if(a[i].second<=n)
            n-=a[i].second,sum+=a[i].second*a[i].first;
        else
        {
            sum+=a[i].first*n;
            break;
        }
    }
    cout<<sum<<endl;
}
