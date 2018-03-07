#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
int main()
{
    Mo_Ha_Med

    int n,m,x;
	cin>>n>>m;
	vector<int>a(n);
	vector<int>ar(n);
	set<int>st;
	for(int i=0;i<n;i++)
		cin >>a[i];
	for(int i=n-1;i>=0;i--)
		st.insert(a[i]),ar[i]=st.size();
	for(int i=0;i<m;i++)
		cin>>x,cout<<ar[x-1]<<endl;
}