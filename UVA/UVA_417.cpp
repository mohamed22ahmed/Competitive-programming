#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
using namespace std;
map<string,int>a;
void sum()
{
    string s;
    int r=1;
    s="ab",a[s]=27,s="";
    for(char i='a';i<='z';i++)
        s=i,a[s]=r++;

    for(char i='a';i<='z';i++)
        for(char j=i+1;j<='z';j++)
            s+=i,s+=j,a[s]=r++,s="";

    for(char i='a';i<='z';i++)
        for(char j=i+1;j<='z';j++)
            for(char k=j+1;k<='z';k++)
                s+=i,s+=j,s+=k,a[s]=r++,s="";

    for(char i='a';i<='z';i++)
        for(char j=i+1;j<='z';j++)
            for(char k=j+1;k<='z';k++)
                for(char q=k+1;q<='z';q++)
                    s+=i,s+=j,s+=k,s+=q,a[s]=r++,s="";

    for(char i='a';i<='z';i++)
        for(char j=i+1;j<='z';j++)
            for(char k=j+1;k<='z';k++)
                for(char q=k+1;q<='z';q++)
                    for(char w=q+1;w<='z';w++)
                        s+=i,s+=j,s+=k,s+=q,s+=w,a[s]=r++,s="";
}
int main()
{
    Mo_Ha_Med

    string s;
    sum();
    while(cin>>s)
        cout<<a[s]<<endl;
}
