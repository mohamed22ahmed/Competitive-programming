#include <bits/stdc++.h>
#define  Mo_Ha_Med   std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)     for(int i=0;i<n;i++)
typedef  long long ll;
typedef  unsigned long long ull;
typedef  long double ld;
using namespace std;
bool a[1000001];
int ans[1000001];
void sieve()
{
    a[1]=a[0]=1;
    for(int i=2;i*i<=1000000;i++)
        if(!a[i])
        {
            int c=1;
            for(int j=i+i;j<=1000000;j+=i)
            {
                if(!a[j])
                    c++;
                a[j]=1;
            }
            ans[i]=c;
        }
}

int main()
{
    Mo_Ha_Med

    sieve();
    int t,n;
    cin>>t;
    while(t--)
    {
        cin>>n;
        cout<<ans[n]<<endl;
    }
}
