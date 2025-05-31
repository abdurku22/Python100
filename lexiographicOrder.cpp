#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s;
        cin>>s;
        int c=0;
        for(int i=s.size()-1;i>0;i--)
        {
            if(s[i]>s[i-1])
            {
                c++;
                char temp=s[i];
                s[i]=s[i-1];
                s[i-1]=temp;
                break;
            }
        }
        if(c>0)
        {
            cout<<s<<endl;
        }
        else
        {
            cout<<"no answer"<<endl;
        }
    }
}