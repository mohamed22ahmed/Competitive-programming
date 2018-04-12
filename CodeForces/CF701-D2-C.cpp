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

    int n;
    string s;
    cin>>n>>s;
    int l=0,r=0,ans=1000000,x;
    set<char>q,a;
    map<char,int>m;
    mm(i,n)
        q.insert(s[i]);
    x=q.size();
    while(l<n)
    {
        while(r<n&&a.size()<x)
            a.insert(s[r]),m[s[r]]++,r++;
        if(a.size()>=x)
            ans=min(ans,r-l);
        if(m[s[l]]==1)
            a.erase(s[l]);
        m[s[l]]--,l++;
    }
    cout<<ans<<endl;
}
