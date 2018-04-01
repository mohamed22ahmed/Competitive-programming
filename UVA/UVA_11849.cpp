#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
void small(string &n)
{
	mm(i,n.size())
		if(n[i]>='A'&&n[i]<='Z')
			n[i]+=32;
}
int main()
{
    Mo_Ha_Med

    int n,m,x,c;
    while(cin>>n>>m&&n&&m)
    {
        c=0;
        map<int,int>a;
        mm(i,n)
            cin>>x,a[x]++;
        mm(i,m)
        {
            cin>>x;
            if(a[x])
                c++;
        }
        cout<<c<<endl;
    }
}
