#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
typedef long long ll;
bool palindrome_str(string n)
{
	string s=n;
	reverse(s.begin(),s.end());
	if (s == n)
		return true;
	return false;
}
void filter(string &s)
{
    string x;
    for(int i=0;i<s.size();i++)
        if(s[i]>='a'&&s[i]<='z')
            x+=s[i];
    s=x;
}
void small(string &n)
{
	for (int i = 0; i < n.size(); i++)
		if (n[i] >= 'A'&&n[i] <= 'Z')
			n[i] += 32;
}
int main()
{
    Mo_Ha_Med

    string s;
   while(getline(cin,s)&&s!="DONE")
   {
        small(s);
        filter(s);
        if(palindrome_str(s))
            cout<<"You won"<<char(39)<<"t be eaten!\n";
        else
            cout<<"Uh oh..\n";
   }
}
