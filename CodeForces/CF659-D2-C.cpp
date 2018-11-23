#include <bits/stdc++.h>

#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
#define  rr(i,n)     for(int i=1;i<=n;i++)
#define  nn(i,n)     for(int i=n-1;i>=0;i--)
#define  xx(i,r,n)   for(int i=r;i<n;i++)
#define  M(a,n)      memset(a,n,sizeof a)
#define  all(v)      ((v).begin()),((v).end())
#define  sz(v)       ((int)(v).size())
#define  L           1e18
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

    int n,m,a[100005],r=0;
    cin>>n>>m;
    mm(i,n)
        cin>>a[i];
    sort(a,a+n);
    ll sum=0;
    vector<int >v;
    for(int i=1;;i++)
    {
        if(a[r]==i)
        {
            r++;
            continue;
        }
        else
        {
            if(i+sum<=m)
                v.push_back(i),sum+=i;
            else
                break;
        }
    }
    cout<<sz(v)<<endl;
    mm(i,sz(v))
        cout<<v[i]<<" ";
    cout<<endl;
}
