#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int a[2000001];
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
    {
        mm(i,n)
            cin>>a[i];
        sort(a,a+n);
        mm(i,n-1)
            cout<<a[i]<<" ";
        cout<<a[n-1]<<endl;
    }
}
