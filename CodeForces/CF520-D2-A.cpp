#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
void small(string &n)
{
	for (int i = 0; i < n.size(); i++)
		if (n[i] >= 'A'&&n[i] <= 'Z')
			n[i] += 32;
}
int main()
{
    Mo_Ha_Med

    int n;
    string s;
    set<char>a;
    cin>>n>>s;
    if(n<26)
        return cout<<"NO\n",0;
    small(s);
    for(int i=0;i<s.size();i++)
        a.insert(s[i]);
    if(a.size()==26)
        return cout<<"YES\n",0;
    cout<<"NO\n";
}