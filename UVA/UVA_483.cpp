#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
int main()
{
    Mo_Ha_Med

    string s;
    while(getline(cin,s))
    {
        vector<string>a;
        string x;
        for(int i=0;i<s.size();i++)
            if(s[i]!=' ')
                x+=s[i];
            else
                reverse(x.begin(),x.end()),a.push_back(x),x="";
        reverse(x.begin(),x.end());
        a.push_back(x);
        for(int i=0;i<a.size()-1;i++)
            cout<<a[i]<<" ";
        cout<<a[a.size()-1]<<endl;
        a.clear();
    }
}
