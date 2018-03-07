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

    string s,x;
    cin>>s>>x;
    small(s),small(x);
    if(s==x)
        return cout<<0<<endl,0;
    if(s>x)
        return cout<<1<<endl,0;
    cout<<-1<<endl;
}