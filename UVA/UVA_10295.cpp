#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,m,y;
    cin>>n>>m;
    string x,s;
    map<string,int>a;
    mm(i,n)
        cin>>x>>y,a[x]=y;
    while(m--)
    {
        ll sum=0;
        while(cin>>s&&s!=".")
            if(a[s])
                sum+=a[s];
        cout<<sum<<endl;
    }
}
