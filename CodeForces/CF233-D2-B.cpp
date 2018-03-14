#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
typedef long long ll;
using namespace std;
int sum_digit(ll n)
{
    int x=0;
    while(n)
        x+=n%10,n/=10;
    return x;
}
int main()
{
    Mo_Ha_Med

    ll n,m,x;
    cin>>n;
    m=sqrt(n);
    x=m-100;
    while(m>x&&m--)
    {
        if(m*m+m*sum_digit(m)==n)
            return cout<<m<<endl,0;
    }
    cout<<-1<<endl;
}
