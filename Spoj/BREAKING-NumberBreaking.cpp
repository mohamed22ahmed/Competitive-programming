#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
vector<int>d;
vector<int> divisors(int n)
{
	int x=sqrt(n);
	if (x*x==n)
		d.push_back(x);
	for (long long i = 1; i*i <n; i++)
		if (n%i == 0)
			d.push_back(i),d.push_back(n/i);
    sort(d.begin(),d.end());
    return d;
}
bool prime(int n)
{
	if (n<=1)
		return false;
	for (long long i=2;i*i<=n;i++)
		if (n%i==0)
			return false;
	return true;
}
int main()
{
    Mo_Ha_Med

    int t,n,q=0;
    cin>>t;
    set<int>st;
    set<int>::iterator it;
    while(t--)
    {
        q++;
        cin>>n;
        divisors(n);
        cout<<"Case "<<q<<":";
        for(int i=0;i<d.size();i++)
            if(prime(d[i]))
                st.insert(d[i]);
        for(it=st.begin();it!=st.end();it++)
            cout<<" "<<*it;
        st.clear();
        d.clear();
        cout<<endl;
    }
}
