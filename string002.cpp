#include<bits/stdc++.h>
using namespace std;
int main()
{
    string s="Abdur AB\"CD";
    // string :: iterator i;
    // for(auto i=s.begin();i<s.end();i++)
    // {
    //     cout<<*i<<" ";
    // }
    string :: iterator i1;
    
    for(i1=s.begin();i1!=s.end()-1;i1++)
    {
        cout<<*i1<<" ";
    }
    cout<<endl;
    string :: iterator i;
    for(i=s.begin();i!=s.end();i++)
    {
        cout<<*i<<" ";
    }
    cout<<endl;
    for(auto i1=s.end()-1;i1>(s.begin()-2);i1--)
    {
        cout<<*i1<<" ";
    }
    cout<<endl;
    string s1;
    getline(cin,s1);
    cout<<s1;
    s.erase(s.begin()+2);
    

}