#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
ll a[50];
int main()
{
    Mo_Ha_Med

    int n,m;
    while(cin>>n>>m&&n&&m)
    {
        for(int i=1;i<=n;i++)
            cin>>a[i];
        int l,r,k;
        for(int i=0;i<m;i++)
            cin>>l>>r>>k,a[l]-=k,a[r]+=k;
        bool ok=0;
        for(int i=1;i<=n;i++)
            if(a[i]<0)
                ok=1;
        if(ok)
            cout<<"N\n";
        else
            cout<<"S\n";
    }
}
