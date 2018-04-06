#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int n,a[10001];
int test(int x)
{
    int mid,l=0,r=n,mn=INT_MAX;
    while(l<=r)
    {
        mid=l+(r-l)/2;
        if(a[mid]==x)
            r=mid-1,mn=min(mn,mid);
        else
            if(a[mid]<x)
                l=mid+1;
        else
            r=mid-1;
    }
    if(mn==INT_MAX)
        return 0;
    return mn+1;
}
int main()
{
    Mo_Ha_Med

    int m,x,r=1;
    while(cin>>n>>m&&(m||n))
    {
        mm(i,n)
            cin>>a[i];
        sort(a,a+n);
        cout<<"CASE# "<<r++<<":\n";
        mm(i,m)
        {
            cin>>x;
            if(!test(x))
                cout<<x<<" not found\n";
            else
                cout<<x<<" found at "<<test(x)<<endl;
        }
    }
}
