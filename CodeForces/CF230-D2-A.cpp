#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,m;
    cin>>n>>m;
    pair<int,int>a[m];
    for(int i=0;i<m;i++)
        cin>>a[i].first>>a[i].second;
    sort(a,a+m);
    for(int i=0;i<m;i++)
        if(a[i].first<n)
            n+=a[i].second;
        else
            return cout<<"NO\n",0;
    cout<<"YES\n";
}
