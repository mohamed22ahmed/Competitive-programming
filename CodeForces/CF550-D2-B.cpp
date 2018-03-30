#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,l,r,x,a[20],m=0;
    cin>>n>>l>>r>>x;
    mm(i,n)
        cin>>a[i];
    mm(i,(1<<n))
    {
        int sum=0,mn=1000000,mx=-100000;
        mm(j,n)
            if(i&(1<<j))
                sum+=a[j],mn=min(mn,a[j]),mx=max(mx,a[j]);
        if(sum>=l&&sum<=r&&(mx-mn)>=x)
            m++;
    }
    cout<<m<<endl;
}
