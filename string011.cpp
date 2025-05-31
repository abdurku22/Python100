#include<bits/stdc++.h>
using namespace std;
int main()
{
    // char x='a';
    string s="Hello ";
    string s2="World";
    s=s+s2;
    cout<<s<<endl;
    s.push_back(' ');
    s.push_back('h');
    s.push_back('i');
    cout<<s<<endl;
    string s3={'a','b','c'};
    cout<<s3<<endl;
    s3="ABC";
    cout<<s3<<endl;
    cout<<s[0]<<endl;
    s[0]='h';
    cout<<s[0]<<endl;
    s3+='d';
    cout<<s3<<endl;
    s3.pop_back();
    cout<<s3<<endl;
    for( char a:s)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    for(auto a:s)
    {
        cout<<a<<" ";
    }
    cout<<endl;
    string :: iterator it;
    for(it=s.begin();it!=s.end();it++)
    {
        cout<<*it<<" ";
    }
    cout<<endl;
    string :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    string :: iterator i1;
    cout<<endl;
    for(i1=s.begin();i!=s.end();i++)
    {
        cout<<*it<<" ";
    }
    for(auto i=s.begin();i<s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i:s)
    {
        cout<<i<<" ";
    }
    cout<<endl;
    for(int i=s.size()-1;i>=0;i--)
    {
        cout<<s[i]<<" ";
    }
    cout<<endl;
}