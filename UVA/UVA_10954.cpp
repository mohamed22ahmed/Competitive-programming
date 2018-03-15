#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
    {
        ll s=0,x;
        multiset<ll>a;
        for(int i=0;i<n;i++)
            cin>>x,a.insert(x);
        while(a.size()>1)
        {
            int m=*a.begin();
            a.erase(a.begin());
            m+=*a.begin();
            a.erase(a.begin());
            a.insert(m);
            s+=m;
        }
        cout<<s<<endl;
        s=0,a.clear();
    }
}
