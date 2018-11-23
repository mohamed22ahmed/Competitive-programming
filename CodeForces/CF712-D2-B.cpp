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

    string s;
    cin>>s;
    int n=sz(s),r=0,l=0,u=0,d=0;
    if(sz(s)&1)
        return cout<<-1<<endl,0;
    mm(i,n)
        if(s[i]=='R')r++;
        else if(s[i]=='L')l++;
        else if(s[i]=='U')u++;
        else d++;
    int ans,m,x;
    m=abs(l-r),x=abs(u-d);
    ans=m/2+x/2+m%2;
    m%=2,x%=2;
    if(m!=x)
        return cout<<-1<<endl,0;
    cout<<ans<<endl;
}
