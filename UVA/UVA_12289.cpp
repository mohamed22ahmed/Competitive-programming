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
    int t;
    cin>>t;
    while(t--)
    {
        cin>>s;
        if(s.size()==5)
        {
            cout<<3<<endl;
            continue;
        }
        else
        {
            if(s[0]=='o'&&s[1]=='n'||s[0]=='o'&&s[2]=='e'||s[1]=='n'&&s[2]=='e')
            {
                cout<<1<<endl;
                continue;
            }
            cout<<2<<endl;
        }
    }
}
