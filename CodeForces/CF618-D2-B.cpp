#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,a[51][51],mx;
    cin>>n;
    vector<int>v(n);
    for(int i=0;i<n;i++)
    {
        mx=INT_MIN;
        for(int j=0;j<n;j++)
            cin>>a[i][j],mx=max(a[i][j],mx);
        v[i]=mx;
    }
    for(int i=0;i<n;i++)
        if(v[i]==n-1)
        {
            v[i]++;
            break;
        }
    for(int i=0;i<n;i++)
        cout<<v[i]<<" ";
}