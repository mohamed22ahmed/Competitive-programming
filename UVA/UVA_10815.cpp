#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
void small(string &n)
{
	for(int i=0;i<n.size();i++)
		if(n[i]>='A'&&n[i]<='Z')
			n[i]+=32;
}
int main()
{
    Mo_Ha_Med

    int r=0;
    set<string>a;
    set<string>::iterator it;
    string x,s;
    while(getline(cin,s))
    {
        small(s);
        for(int i=0;i<s.size();i++)
            if(s[i]>='a'&&s[i]<='z')
                x+=s[i];
            else
                {
                    if(!x.empty())
                        a.insert(x);
                    x="";
                }
        if(!x.empty())
            a.insert(x);
    }
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<"\n";
}
