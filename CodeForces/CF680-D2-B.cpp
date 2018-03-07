#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

	int n,a[101],m,x=0;
    cin>>n>>m;
    for(int i=1;i<=n;i++)
    {
        cin>>a[i];
        if(a[i]==1)
            x++;
    }
    for(int i=0;i<m&&i<=n-m;i++)
        if(a[i+m]+a[m-i]==1)
            x--;
    cout<<x<<endl;
}