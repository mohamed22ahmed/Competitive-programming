#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int n,m;
int binSearch()
{
    ll l=0,r=1e12,mn=1e12,md;
    while(l<=r)
    {
        md=l+(r-l)/2;
        ll sum=0,t=1,s=md;
        while(s/t)
        {
             sum+=s/t;
             t*=m;
        }
        if(sum>=n)
        {
            r=md-1;
            mn=min(mn,md);
        }
        else
            l=md+1;
    }
    return mn;
}
int main()
{
    Mo_Ha_Med

    cin>>n>>m;
    cout<<binSearch()<<endl;
}
