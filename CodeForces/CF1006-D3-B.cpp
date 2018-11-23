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

    int n,k,a[2005],b[2005],sum=0;
    cin>>n>>k;
    mm(i,n)
        cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    reverse(b,b+n);
    map<int,int>mp;
    vector<int>v;
    mm(i,k)
        sum+=b[i],mp[b[i]]++;
    cout<<sum<<endl;
    int r=0;
    mm(i,n)
    {
        r++;
        if(mp[a[i]])
        {
            if(sz(v)==k-1)
                continue;
            v.push_back(r),r=0;
            mp[a[i]]--;
        }
    }
    if(r&&sz(v)<k)
        v.push_back(r);
    mm(i,sz(v))
        cout<<v[i]<<" ";
    cout<<endl;
}
