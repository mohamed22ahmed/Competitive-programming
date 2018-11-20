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

    int n,a[1001],mx=0;
    cin>>n;
    mm(i,n)
        cin>>a[i];
    mm(i,n)
    {
        int m=1,x=a[i];
        for(int j=i-1;j>=0;j--)
            if(x>=a[j])
                m++,x=a[j];
            else
                break;
        x=a[i];
        for(int j=i+1;j<n;j++)
            if(x>=a[j])
                m++,x=a[j];
            else
                break;
        mx=max(mx,m);
    }
    cout<<mx<<endl;
}
