#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=0;i<n;i++)
typedef long long ll;
using namespace std;
int main()
{
    Mo_Ha_Med

    int n;
    while(cin>>n&&n)
	{
		deque<int>a;
		mm(i,n)
			a.push_back(i+1);
		cout<<"Discarded cards:";
		bool f=0;
		while(a.size()>1)
		{
			if(f)
				cout<<',';
			cout<<" "<<a.front();
			a.pop_front();
			a.push_back(a.front());
			a.pop_front();
			f=1;
		}
		cout<<endl<<"Remaining card: "<<a.front()<<endl;
	}
}
