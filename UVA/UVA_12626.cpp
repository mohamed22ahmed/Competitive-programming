#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    // M A R G I T
    // 1 3 2 1 1 1
    int n;
    cin>>n;
    while(n--)
    {
        int a[6]={0};
        string s,x="MARGIT";
        cin>>s;
        for(int i=0;i<s.size();i++)
            for(int j=0;j<x.size();j++)
                if(s[i]==x[j])
                    a[j]++;
        a[1]/=3,a[2]/=2;
        cout<<*min_element(a,a+6)<<endl;
    }
}
