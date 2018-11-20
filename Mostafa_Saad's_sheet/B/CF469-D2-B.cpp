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

bool ar[10000];
int main()
{
    Mo_Ha_Med

    int n,m,x,y,a1[51],a2[51],a,b;
    cin>>n>>m>>x>>y;
    mm(i,n)
        cin>>a1[i]>>a2[i];
    mm(i,m)
    {
        cin>>a>>b;
        mm(k,n)
            for(int j=x;j<=y;j++)
            {
                int r,t;
                t=a+j,r=b+j;
                if(a1[k]<=r&&a2[k]>=t)
                    ar[j]=1;
            }
    }
    int q=0;
    for(int i=x;i<=y;i++)
        if(ar[i])
            q++;
    cout<<q<<endl;
}
