#include<bits/stdc++.h>
using namespace std;
int main()
{
    int n,c=0;
    cin>>n;
    int arr[26]={0};
    string s;
    cin>>s;
    string :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(int i=0;i<n;i++)
    {
        int x=s[i];
        if(x>=65&&x<=90)
        {
            x-=65;
        }
        else if(x>=97&&x<=122)
        {
            x-=97;
        }
        arr[x]++;
    }
    for(int i=0;i<26;i++)
    {
        if(arr[i]==0) c++;
    }
    if(c>0)
    {
        cout<<"NO"<<endl;
    }
    else
    {
        cout<<"YES"<<endl;
    }

}