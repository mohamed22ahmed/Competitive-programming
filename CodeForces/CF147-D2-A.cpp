#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    string s;
    int r=0;
    getline(cin,s);
    while(r<s.size()-1)
    {
        if(s[r]==' ')
        {
            if(s[r+1]==' '||s[r+1]==','||s[r+1]=='!'||s[r+1]=='?'||s[r+1]=='.')
            {
                s.erase(r,1);
                continue;
            }
        }
        else
            if(s[r]==','||s[r]=='!'||s[r]=='?'||s[r]=='.')
            {
                if(s[r+1]>='a'&&s[r+1]<='z')
                {
                    string x="  ";
                    x[0]=s[r];
                    s.replace(r,1,x);
                    continue;
                }
                if(s[r+1]==','||s[r+1]=='!'||s[r+1]=='?'||s[r+1]=='.')
                {
                    s.erase(r,1);
                    continue;
                }
            }
        r++;
    }
    cout<<s<<endl;
}