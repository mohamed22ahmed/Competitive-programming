#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
    {
        int a[101][101];
        vector<int>v,vec;
        int x=0,y=0;
        for(int i=0;i<n;i++)
        {
            int s=0;
            for(int j=0;j<n;j++)
                cin>>a[i][j],s+=a[i][j];
            v.push_back(s);
            if(s%2)
                x++;
        }
        for(int i=0;i<n;i++)
        {
            int r=0;
            for(int j=0;j<n;j++)
                r+=a[j][i];
            vec.push_back(r);
            if(r%2)
                y++;
        }
        if(!x&&!y)
        {
            cout<<"OK\n";
            continue;
        }
        if(x>=2||y>=2)
        {
            cout<<"Corrupt\n";
            continue;
        }
        int m,z;
        for(int i=0;i<n;i++)
            if(v[i]&1==1)
                m=i+1;
        for(int i=0;i<n;i++)
            if(vec[i]&1==1)
                z=i+1;
        if(y==1&&x==1)
        {
            cout<<"Change bit ("<<m<<","<<z<<")\n";
            continue;
        }
        else
            cout<<"Corrupt\n";
    }
}
