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

    string s,x;
    int n,a,b,r;
    cin>>n>>s;
    x=s;
    if(n&1)
        r=n/2;
    else
        r=n/2-1;
    a=r-1;
    b=r+1;
    x[r]=s[0];
    if(n&1)
        for(int i=1;i<n;i++)
            if(i&1)
                x[a--]=s[i];
            else
                x[b++]=s[i];
    else
        for(int i=1;i<n;i++)
            if(i&1)
                x[b++]=s[i];
            else
                x[a--]=s[i];
    cout<<x<<endl;
}
