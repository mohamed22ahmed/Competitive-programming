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

char c,ar[101][101];
bool a[26];

int main()
{
    Mo_Ha_Med

    int n,m;
    cin>>n>>m>>c;
    mm(i,n)
        mm(j,m)
            cin>>ar[i][j];
    mm(i,n)
        mm(j,m)
            if(ar[i][j]==c)
            {
                if(i-1>=0&&ar[i-1][j]!=c&&ar[i-1][j]!='.')
                    a[ar[i-1][j]-'A']=1;
                if(i+1<n&&ar[i+1][j]!=c&&ar[i+1][j]!='.')
                    a[ar[i+1][j]-'A']=1;
                if(j-1>=0&&ar[i][j-1]!=c&&ar[i][j-1]!='.')
                    a[ar[i][j-1]-'A']=1;
                if(j+1<m&&ar[i][j+1]!=c&&ar[i][j+1]!='.')
                    a[ar[i][j+1]-'A']=1;
            }
    int s=0;
    mm(i,26)
        if(a[i])
            s++;
    cout<<s<<endl;
}
