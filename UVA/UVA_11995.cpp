#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int t;
    while(cin>>t)
    {
        stack<int>st;
        queue<int>q;
        priority_queue<int>pq;
        int s=0,qu=0,pr=0,c=0,n,m;
        while(t--)
        {
            cin>>n>>m;
            if(n==1)
                st.push(m),q.push(m),pq.push(m);
            else
            {
                if(!st.empty()&&m==st.top())
                    s++,st.pop();
                if(!q.empty()&&m==q.front())
                    qu++,q.pop();
                if(!pq.empty()&&m==pq.top())
                    pr++,pq.pop();
                c++;
            }
        }
        if(s==qu&&s==c||qu==c&&qu==pr||pr==c&&s==pr)
                cout<<"not sure\n";
        else
            if(qu==c)
                cout<<"queue\n";
        else
            if(pr==c)
                cout<<"priority queue\n";
        else
            if(s==c)
                cout<<"stack\n";
        else
            cout<<"impossible\n";
    }
}
