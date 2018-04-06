#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int a[50001],n;
int tallest(int x)
{
    int mid,l=0,r=n,mx=INT_MIN;
    while(l<=r)
    {
        mid=(r+l)/2;
        if(a[mid]<x)
            l=mid+1,mx=max(mx,a[mid]);
        else
            r=mid-1;
    }
    if(mx==INT_MIN)
        return -1;
    return mx;
}
int shortest(int x)
{
    int mid,l=0,r=n,mn=INT_MAX;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(a[mid]>x)
            r=mid-1,mn=min(mn,a[mid]);
        else
            l=mid+1;
    }
    if(mn==INT_MAX)
        return -1;
    return mn;
}
int main()
{
    Mo_Ha_Med

    int m,x;
    cin>>n;
    mm(i,n)
        cin>>a[i];
    cin>>m;
    while(m--)
    {
        cin>>x;
        int q=tallest(x),w=shortest(x);
        if(q==-1)
            cout<<'X'<<" ";
        else
            cout<<q<<" ";
        if(w==-1)
            cout<<'X'<<endl;
        else
            cout<<w<<endl;
    }
}
