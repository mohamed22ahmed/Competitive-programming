#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int t;
    cin>>t;
    while(t--)
    {
        int n,m,a[20],r=2,sum=0;
        cin>>n>>m;
        mm(i,n)
            cin>>a[i];
        for(int i=1;i<(1<<n);i++)
        {
            sum=0;
            bitset<32>b(i);
            mm(j,b.size())
            {
                if(b[j])
                    sum+=a[j];
                if(j==n)
                    break;
                if(sum==m)
                {
                    r=5;
                    break;
                }
            }
        }
        if(r==5)
            cout<<"Yes\n";
        else
            cout<<"No\n";
    }
}
