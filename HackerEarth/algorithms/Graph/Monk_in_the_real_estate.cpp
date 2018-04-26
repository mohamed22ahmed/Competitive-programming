#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int t;
    cin>>t;
    while(t--)
    {
        int n,x,y,r=0,s=0;
        cin>>n;
        set<int>a;
        while(n--)
            cin>>x>>y,a.insert(x),a.insert(y);
        cout<<a.size()<<endl;
        a.clear();
    }
}
