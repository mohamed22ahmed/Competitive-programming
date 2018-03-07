#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
int convert(string s)
{
    int sum=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='1')
            sum+=pow(2,i);
    return sum;
}
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
    {
        string s="";
        while(n)
            s+=n%2+'0',n/=2;
        reverse(s.begin(),s.end());
        ll x=0,y=0,t=1,r=1;
		bool f=0;
		for(int i=s.size()-1;i>=0;i--)
		{
			if(s[i]=='1')
            {
				if(f)
					x+=t,f=0;
				else
					y+=t,f=1;
			}
			t=pow(2,r++);
		}
		cout<<y<<" " <<x<<endl;
    }
}
