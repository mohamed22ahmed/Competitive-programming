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

    string s,x;
    set<string>a;
    set<string>::iterator it;
    while(getline(cin,s))
    {
        small(s);
        mm(i,s.size())
            if (i!=s.size()-1)
			{
				if(isalpha(s[i])||s[i]== '-')
					x+=s[i];
				else
				{
					if(x!="")
						a.insert(x),x="";
				}
			}
			else
			{
				if(isalpha(s[i]))
					x+=s[i];
				if(s[i]!='-'&&x!="")
					a.insert(x),x="";
			}
    }
    for(it=a.begin();it!=a.end();it++)
        cout<<*it<<endl;
}
