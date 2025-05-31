#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int a,b,s=0;
        cin>>a;
        b=a%10;
        a=a/10;
        cout<<a+b<<endl;
    }
}