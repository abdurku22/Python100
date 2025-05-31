#include<bits/stdc++.h>
using namespace std;
bool isvowel(char c)
{
    return(c=='a'||c=='e'||c=='i'||c=='o'||c=='u'||c=='y');
}
int main()
{
    string s;
    cin>>s;
    string ans="";
    for(auto c : s)
    {
        c=tolower(c);
        if(isvowel(c))
        {
            continue;
        }
        ans+=".";
        ans+=c;
    }
    cout<<ans<<endl;
}