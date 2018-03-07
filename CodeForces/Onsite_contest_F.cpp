#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    string s;
    cin>>s;
    int a[26];
    ll r=0;
    for(int i=0;i<26;i++)
        cin>>a[i];

    // string without ?
    if(s.find('?')==-1)
    {
        for(int i=1;i<s.size();i++)
            r+=abs(a[s[i]-'a']-a[s[i-1]-'a']);
        return cout<<r<<endl<<s<<endl,0;
    }

    // counting question mark ?
    int z=0;
    for(int i=0;i<s.size();i++)
        if(s[i]=='?')
            z++;

    // all characters of the string are ?
    if(z==s.size())
    {
        for(int i=0;i<s.size();i++)
            if(s[i]=='?')
                s[i]='a';
        return cout<<0<<endl<<s<<endl,0;
    }


    // string with the first char ?
    if(s[0]=='?')
    {
        int t;
        char a;
        for(int i=1;i<s.size();i++)
            if(s[i]!='?')
            {
                a=s[i];
                t=i;
                break;
            }
        for(int i=0;i<t;i++)
            s[i]=a;
    }


    // string with the last char ?
    if(s[s.size()-1]=='?')
    {
        int t;
        char a;
        for(int i=s.size()-2;i>=0;i--)
            if(s[i]!='?')
            {
                a=s[i];
                t=i;
                break;
            }
        for(int i=t+1;i<s.size();i++)
            s[i]=a;
    }


    // string with char ? in any place
    for(int i=0;i<s.size();i++)
    {
        char m,n;
        int mn=INT_MAX,x,y,t;
        if(s[i]=='?')
        {
            m=s[i-1];
            x=i;
            for(int j=i;i<s.size();j++)
                if(s[j]!='?')
                {
                    n=s[j];
                    y=j;
                    break;
                }
            for(int j=0;j<26;j++)
                if((abs(a[n-'a']-a[j])+abs(a[m-'a']-a[j]))<mn)
                    mn=abs(a[n-'a']-a[j])+abs(a[m-'a']-a[j]),t=j;
            for(int j=x;j<y;j++)
                s[j]=char(t+'a');
        }
    }
    for(int i=1;i<s.size();i++)
        r+=abs(a[s[i]-'a']-a[s[i-1]-'a']);
    cout<<r<<endl<<s<<endl;
}
