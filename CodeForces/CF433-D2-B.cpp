#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
long long a[100001],b[100001];
int main()
{
    Mo_Ha_Med

    int n,m,l,r,t;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i],b[i]=a[i];
    sort(b,b+n);
    for(int i=1;i<n;i++)
        a[i]+=a[i-1],b[i]+=b[i-1];
    cin>>m;
    while(m--)
    {
        cin>>t>>l>>r;
        if(l>=1)
            l--;
        r--;
        if(t==1)
            cout<<a[r]-a[l-1]<<endl;
        else
            cout<<b[r]-b[l-1]<<endl;
    }
}