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

    int n,m,x,y,a,b;
    vector<int>v;
    cin>>n>>m>>x>>y;
    mm(i,x)
        cin>>a>>b,a--,b--,v.push_back(a*m+b);
    sort(all(v));
    mm(i,y)
    {
        cin>>a>>b;
        a--,b--;
        int r=a*m+b;
        if(binary_search(all(v),r))
        {
            cout<<"Waste\n";
            continue;
        }
        int q=0;
        mm(j,v.size())
            if(v[j]<r)
                q++;
            else
                break;
        r-=q;
        if(r%3==0)
            cout<<"Carrots\n";
        else
            if(r%3==1)
                cout<<"Kiwis\n";
        else
            cout<<"Grapes\n";
    }
}
