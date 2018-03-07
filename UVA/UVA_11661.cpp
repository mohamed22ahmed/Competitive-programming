#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
int main()
{
    Mo_Ha_Med

    string s;
    int n;
    while(cin>>n&&n)
    {
        int mn=2000001;
        cin>>s;
        if(s.find("Z")!=-1)
            cout<<0<<endl;
        else
        {
            int x=-10,y=-10;
            for(int i=0;i<n;i++)
                if(s[i]=='R')
                {
                    x=i;
                    if(y!=-10)
                        mn=min(mn,abs(x-y));
                    y=-10;
                }
                else
                    if(s[i]=='D')
                    {
                        y=i;
                        if(x!=-10)
                            mn=min(mn,abs(x-y));
                        x=-10;
                    }
                cout<<mn<<endl;
        }
    }
}
