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

    int n,m,x,r=1,q,w;
    bool y=0;
    cin>>n>>m>>x;
    vector<int>a(m);
    mm(i,m)
        cin>>a[i];
    sort(all(a));
    if(binary_search(all(a),1))
        y=1;
    mm(i,x)
    {
        cin>>q>>w;
        if(q==r)
            r=w;
            else
        if(r==w)
            r=q;
        if(!y)
            if(binary_search(all(a),r))
                return cout<<r<<endl,0;
    }
    if(y)
        return cout<<1<<endl,0;
    cout<<r<<endl;
}
