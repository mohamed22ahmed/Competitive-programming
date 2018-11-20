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

    int n,x;
    set<int>a;
    set<int>::iterator it;
    cin>>n;
    mm(i,n)
        cin>>x,a.insert(x);
    if(a.size()<3)
        return cout<<"YES\n",0;
    it=a.begin();
    int a1,a2,a3;
    a1=*it;it++;a2=*it;it++;a3=*it;
    if(a.size()==3)
        return cout<<((2*a2)==(a1+a3)?"YES\n":"NO\n"),0;
    cout<<"NO\n";
}
