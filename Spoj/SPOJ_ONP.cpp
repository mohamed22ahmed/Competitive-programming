#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int t;
	cin>>t;
	while(t--)
	{
		string s;
		cin>>s;
		stack<char>a;
		mm(i,s.size())
		{
			if(isalpha(s[i]))
				cout<<s[i];
            else
                if(s[i]=='-'|s[i]=='+'||s[i]=='/'||s[i]=='*'||s[i]=='^')
                    a.push(s[i]);
			else
                if(s[i]== ')')
                    cout<<a.top(),a.pop();
		}
		cout<<endl;
	}
}
