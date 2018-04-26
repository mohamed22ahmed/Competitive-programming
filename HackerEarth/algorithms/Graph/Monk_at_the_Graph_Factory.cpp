#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,x,sum=0;
    cin>>n;
    mm(i,n)
        cin>>x,sum+=x;
    if(sum==2*(n-1))
        return cout<<"Yes\n",0;
    cout<<"No\n";
}
