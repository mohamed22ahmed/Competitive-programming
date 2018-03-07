#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
int ar[100000],cum[100001];
int main()
{
    Mo_Ha_Med

    int n,q,l,r;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>ar[i];
    cin>>q;
    while(q--)
        cin>>l>>r,l--,cum[l]--,cum[r]++;
    vector<int>a;
    for(int i=0;i<n;i++)
    {
        cum[i]+=cum[i-1];
        if(!cum[i])
            a.push_back(ar[i]);
    }
    cout<<a.size()<<endl;
    for(int i=0;i<a.size()-1;i++)
        cout<<a[i]<<" ";
    cout<<a[a.size()-1]<<endl;
}
