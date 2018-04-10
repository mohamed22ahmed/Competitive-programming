#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,m,x;
    vector<int>a;
    cin>>n>>m;
    mm(i,n)
        cin>>x,a.push_back(x);
    int l=0,r=0,ans=INT_MIN,sum=0;
    while(l<=r)
    {
        while(r<n&&a[r]+sum<=m)
            sum+=a[r++];
        ans=max(ans,sum);
        sum-=a[l++];
    }
    cout<<ans<<endl;
}
