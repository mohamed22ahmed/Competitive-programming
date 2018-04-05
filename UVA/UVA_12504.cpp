#include <bits/stdc++.h>
#define  Mo_Ha_Med  std::ios_base::sync_with_stdio(0),cin.tie(NULL),cout.tie(NULL);
#define  mm(i,n)    for(int i=1;i<n;i++)
#define  nn(i,n)    for(int i=0;i<n;i++)
typedef  long long ll;
typedef  long double ld;
using namespace std;
int main()
{
    Mo_Ha_Med

    int t;
    cin>>t;
    string s,x;
    while(t--)
    {
        map<string,string>a,b;
        map<string,string>::iterator it1=a.begin(),it2=b.begin(),temp;
        set<string>v1,v2,v3;
        set<string>::iterator st;
        int c=1;

        cin>>s>>x;

        while(c<s.size())
        {
            string t1="";
            while(isalpha(s[c]))
                t1+=s[c],c++;
            if(s[c]==':')
                c++;
            string t2="";
            while(s[c]>='0'&&s[c]<='9')
                t2+=s[c],c++;
            if(s[c]==','||s[c]=='}')
                c++;
            if(t1!=""&&t2!="")
                a[t1]=t2;
        }

        c=1;
        while(c<x.size())
        {
            string t1="";
            while(isalpha(x[c]))
                t1+=x[c],c++;
            if(x[c]==':')
                c++;
            string t2="";
            while(x[c]>='0'&&x[c]<='9')
                t2+=x[c],c++;
            if(x[c]==','||x[c]=='}')
                c++;
            if(t1!=""&&t2!="")
            b[t1]=t2;
        }

        for(it1;it1!=a.end();it1++)
            if(b.count(it1->first)==0)
                v2.insert(it1->first);

        for(it2;it2!=b.end();it2++)
        {
            if(a.count(it2->first)==0)
                v1.insert(it2->first);
            else
            {
                temp=a.find(it2->first);
                if(temp->second!=it2->second)
                    v3.insert(it2->first);
            }
        }

        int sz1=v1.size(),sz2=v2.size(),sz3=v3.size();

        if(sz1>0)
        {
            cout<<"+";
            int cnt=0 ;
            for(st=v1.begin(); st!=v1.end();st++)
            {
                if(cnt)
                    cout<<",";
                cnt++;
                cout<<*st;
            }
            cout<<endl;
        }

        if(sz2>0)
        {
            cout<<"-";
            int cnt=0;
            for(st=v2.begin();st!=v2.end();st++)
            {
                if(cnt)
                    cout<<",";
                cnt++;
                cout<<*st;
            }
            cout<<endl;
        }

        if(sz3>0)
        {   cout<<"*";
            int cnt=0;
            for(st=v3.begin();st!=v3.end();st++)
            {
                if(cnt)
                    cout<<",";
                cnt++;
                cout<<*st;
            }
            cout<<endl;
        }

        if(!sz1&&!sz2&&!sz3)
            cout<<"No changes"<<endl;
        cout<<endl;
    }
}
