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
    for(int i=0;i<3;i++)
    {
        cin>>s;
        if(s[1]=='>')
            x+=s[0];
        else
            x+=s[2];
    }
    int a,b,c;
    a=count(x.begin(),x.end(),'A');
    b=count(x.begin(),x.end(),'B');
    c=count(x.begin(),x.end(),'C');
    if(a==3||b==3||c==3||(a==b&&a==c))
    {
        cout<<"Impossible\n"<<endl;
        return 0;
    }
    if(a>b&&a>c&&b>c)
        cout<<"CBA\n";
    else
        if(a>b&&a>c&&b<c)
        cout<<"BCA\n";
    else
        if(a>b&&a<c&&b<c)
        cout<<"BAC\n";
    else
        if(b>a&&b>c&&a>c)
        cout<<"CAB\n";
    else
        if(b>a&&b>c&&c>a)
        cout<<"ACB\n";
    else
        if(b>a&&b<c&&c>a)
        cout<<"ABC\n";
}
