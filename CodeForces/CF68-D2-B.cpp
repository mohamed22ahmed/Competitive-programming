#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
#define  EPS         1e-9
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int n,a[10001];
double k;
bool BS(double s)
{
    double x=0;
    mm(i,n)
        if(a[i]>s)
            x+=(a[i]-s)*(1.0-k/100);
        else
            x-=s-a[i];
    return x>=0;
}
int main()
{
    Mo_Ha_Med

    cin>>n>>k;
    mm(i,n)
        cin>>a[i];
    cout<<fixed<<setprecision(9);
    sort(a,a+n);
    double l=0,r=double(a[n-1]),md,ans;
    while(r-l>EPS)
    {
        md=(r+l)/2;
        if(BS(md))
            l=md,ans=md;
        else
            r=md;
    }
    cout<<ans<<endl;
}
