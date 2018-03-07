#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
void small(string &n)
{
	for (int i = 0; i < n.size(); i++)
		if (n[i] >= 'A'&&n[i] <= 'Z')
			n[i] += 32;
}
int main()
{
    Mo_Ha_Med

    string s;
    while(getline(cin,s))
    {
        small(s);
        vector<string>a;
        int m=0;
        string x;
        for(int i=0;i<s.size();i++)
            if(s[i]>='a'&&s[i]<='z')
                m++,x+=s[i];
            else
            {
                if(m)
                    a.push_back(x),m=0;
            }
        if(m)
            a.push_back(x);
        cout<<a.size()<<endl;
        a.clear();
    }
}
