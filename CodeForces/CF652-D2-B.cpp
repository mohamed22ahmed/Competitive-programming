#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    deque<int>q;
    int n,a[1001];
    cin>>n;
    mm(i,n)
        cin>>a[i];
    sort(a,a+n);
    mm(i,n)
        q.push_back(a[i]);
    while(!q.empty())
    {
        cout<<q.front()<<" ";
        q.pop_front();
        if(q.empty())
            break;
        cout<<q.back()<<" ";
        q.pop_back();
    }
}
