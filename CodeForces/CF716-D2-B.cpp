#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    string s;
    cin>>s;
    if(s.size()<26)
        return cout<<-1<<endl,0;
    int l=0;
    while(l<s.size()-25)
    {
        int a[26]={0},y=2;
        for(int i=l;i<l+26;i++)
            if(s[i]!='?')
                a[s[i]-'A']++;

        mm(i,26)
            if(a[i]>1)
            {
                y=5;
                break;
            }
        if(y==5)
        {
            l++;
            continue;
        }
        string x="";
        mm(i,26)
            if(!a[i])
                x+=i+'A';
        int t=0;
        for(int i=l;i<l+26;i++)
            if(s[i]=='?')
                s[i]=x[t++];
        mm(i,s.size())
            if(s[i]=='?')
                s[i]='A';
        return cout<<s<<endl,0;
    }
    cout<<-1<<endl;
}
