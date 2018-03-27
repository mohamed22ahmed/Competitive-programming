#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    string s;
    while(cin>>s)
	{

		string ans="",x="";
		bool t=0;
		mm(i,s.size())
			if(s[i]=='[')
				ans=x+ans,x="",t=1;
			else
                if(s[i]==']')
				ans=x+ans,x="",t=0;
			else
			{
                if(t)
					x+=s[i];
				else
					ans+=s[i];
			}
        cout<<x<<ans<<endl;
	}
}
