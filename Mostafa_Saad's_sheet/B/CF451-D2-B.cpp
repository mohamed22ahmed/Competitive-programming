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

    int n,l=-1,r=-1;
    cin>>n;
    vector<int>v(n+1);
    mm(i,n)
    {
        cin>>v[i];
        if(v[i]<v[i-1]&&l==-1)
            l=i-1;
        if(v[i]<v[i-1]&&l!=-1)
            r=i;
    }
    if(is_sorted(all(v)))
        return cout<<"yes\n1 1\n",0;
    if(l!=-1)
        reverse(v.begin()+l,v.begin()+r+1);
    if(!is_sorted(all(v)))
        return cout<<"no\n",0;
    cout<<"yes\n"<<l<<" "<<r<<endl;
}
