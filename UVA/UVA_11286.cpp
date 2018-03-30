#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,x;
    while(cin>>n&&n)
    {
        map<string,int>a;
        map<string,int>::iterator it;
        mm(i,n)
        {
            int ar[5];
            string s="";
            mm(j,5)
                cin>>ar[j];
            sort(ar,ar+5);
            mm(j,5)
                s+=to_string(ar[j]);
            a[s]++;
        }
        int mx=-1,r=0;
        for(it=a.begin();it!=a.end();it++)
            mx=max(mx,it->second);
        for(it=a.begin();it!=a.end();it++)
            if(it->second==mx)
                r+=mx;
        cout<<r<<endl;
    }
}
