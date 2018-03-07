#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,a[100000];
    ll s=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i],s+=a[i];
    if(!(s%2))
        return cout<<s<<endl,0;
    sort(a,a+n);
    for(int i=0;i<n;i++)
        if(a[i]&1==1)
            return s-=a[i],cout<<s<<endl,0;
}