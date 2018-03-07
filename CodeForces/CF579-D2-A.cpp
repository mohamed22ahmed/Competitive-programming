#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,s=0;
    cin>>n;
    while(n)
        s+=n%2,n/=2;
    cout<<s<<endl;
}