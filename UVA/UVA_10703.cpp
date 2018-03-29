#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,m,x;
    while(cin>>n>>m>>x&&n&&m)
    {
        int a[501][501];
        mm(i,n+1)
            mm(j,m+1)
                a[i][j]=0;
        int x1,x2,y1,y2,sum=0;
        while(x--)
        {
			cin>>x1>>y1>>x2>>y2;
			if(x1>x2)
				swap(x1,x2);
			if(y1>y2)
				swap(y1,y2);
			for(int i=x1;i<=x2;i++)
                for(int j=y1;j<=y2;j++)
					a[i][j]=1;
        }
		for(int i=1;i<=n;i++)
            for(int j=1;j<=m;j++)
				if(!a[i][j])
                    sum++;
		if(!sum)
			cout<<"There is no empty spots."<<endl;
        else
		 if(sum==1)
			cout<<"There is one empty spot."<<endl;
		 else
			cout<<"There are "<<sum<<" empty spots."<<endl;
    }
}
