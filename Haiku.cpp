#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
    return (c=='a'||c=='e'||c=='i'||c=='o'||c=='u');
}
int main()
{
    int t=3,c1=0,c2=0,c3=0;
    string s1,s2,s3;
    string temp;
    
    
    getline(cin,s1);
    getline(cin,s2);
    getline(cin,s3);
    
    
    for(int i=0;i<s1.size();i++)
    {
        if(isvowel(s1[i]))
        {
            c1++;
        }
    }
    for(int i=0;i<s2.size();i++)
    {
        if(isvowel(s2[i]))
        {
            c2++;
        }
    }
    for(int i=0;i<s3.size();i++)
    {
        if(isvowel(s3[i]))
        {
            c3++;
        }
    }
    if(c1==5&&c2==7&&c3==5)
    {
        cout<<"YES"<<endl;
    }
    else
    {
        cout<<"NO"<<endl;
    }
}