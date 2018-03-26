#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
#define  nn(i,n)    for(int i=1;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
    {
        int sum=0;
        cin.ignore();
        string a[15];
        vector<int>ar;
        mm(i,n)
            getline(cin,a[i]);
        mm(i,n)
        {
            sum=0;
            mm(j,25)
                if(a[i][j]!='X')
                    sum++;
            ar.push_back(sum);
        }
        sum=0;
        sort(ar.begin(),ar.end());
        nn(i,ar.size())
            sum+=ar[i]-ar[0];
        cout<<sum<<endl;
    }
}
